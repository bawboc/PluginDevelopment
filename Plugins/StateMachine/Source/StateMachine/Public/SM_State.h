// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Core.h"
#include "Engine/DataAsset.h"
#include "SM_State.generated.h"

class USM_Branch;
class USM_State;

UENUM()
enum class ESateMachineCompletionType : uint8 {

	// Implicit failure - thise state is not marked as Accept
	NotAccepted,

	// Success - this state is an Accept state
	Accepted,

	// Explicit failure - this state is specifically marked as failure/not-accept
	Rejected,

	// Our simulation ran out of steps while the machine was still running
	OutOfSteps UMETA(Hidden)
};


USTRUCT()
struct STATEMACHINE_API FSateMachineResult {
	GENERATED_BODY()

	UPROPERTY()
		ESateMachineCompletionType CompletionType;

	UPROPERTY()
		USM_State* FinalState;

	UPROPERTY()
		int32 DataIndex;
};

UCLASS()
class STATEMACHINE_API USM_InputAtom : public UDataAsset {
	// One atomic unit of input
	GENERATED_BODY()

public:

	UPROPERTY(Editanywhere)
		FName Description;
};

UCLASS(EditInlineNew)
class STATEMACHINE_API USM_Branch : public UDataAsset {
	GENERATED_BODY()

public:
	/*
	*	Returns DestinationState on success, NULL on failure.
	*/
	virtual USM_State* TryBranch(const UObject* RefObject, const TArray<USM_InputAtom*>& DataSource,
		int32 DataIndex, int32 &OutDataIndex);

protected:
	// State where we go next.  Ignored if null
	UPROPERTY(EditAnywhere)
		USM_State* DestinationState;

	// If true, the meaning of AccpetableInputs is reversed
	UPROPERTY(EditAnywhere)
		uint32 bReverseInputTest : 1;

	// Accpetable inputs.  The current input atom must be on this list
	UPROPERTY(EditAnywhere)
		TArray<USM_InputAtom*> AcceptableInputs;
};

/**
 *
 */
UCLASS()
class STATEMACHINE_API USM_State : public UDataAsset {
	GENERATED_BODY()

public:

	USM_State();

	/*
	*	Attempt to run the state with input from the given DataSource object.
	*	Will start reading input at DataIndex.
	*	Will decrement RemainingSteps and automatically fail after it hits 0.
	*/
	UFUNCTION(Category = "State Machine")
		virtual FSateMachineResult RunState(const UObject* RefObject,
			const TArray<USM_InputAtom*>& DataSource, int32 DataIndex = 0, int32 RemainingSteps = -1);

protected:

	// Loop used when input atom being processed isn't recognized.
	virtual FSateMachineResult LoopState(const UObject* RefObject,
		const TArray<USM_InputAtom*>& DataSource, int32 DataIndex, int32 RemainingSteps);

	/*
	*	If input runs out on this state - or TerminateImmediately is true - 
	*	this is how result will be interpreted 
	*/
	UPROPERTY(EditAnywhere)
		ESateMachineCompletionType CompletionType;

	/*
	*	A state machine that enters this state will terminate immediately
	*	regardless of whether or not there is more input data.
	*/
	UPROPERTY(EditAnywhere)
		uint32 bTerminateImmediately : 1;


	/*
	*	If this is set, this state will loop on itself whenever an unhandles input atom is detected.
	*/
	UPROPERTY(EditAnywhere)
		uint32 bLoopByDefault : 1;

	/*
	*	Branches to other states.  These are in priority order, so the
	*	first successful branch will be taken.
	*/
	UPROPERTY(EditAnywhere, Instanced)
		TArray<USM_Branch*> InstancedBranches;
};
