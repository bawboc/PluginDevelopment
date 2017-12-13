// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SM_State.h"
#include "Quest.generated.h"

UENUM()
enum class EQuestCompletion : uint8 {
	EQC_NotStarted,
	EQC_Started,
	EQC_Succeeded,
	EQC_Failed
};

/**
 * Generic Quest
 */
UCLASS()
class PLUGINDEVELOPMENT_API UQuest : public UDataAsset
{
	GENERATED_BODY()
	
public:

	/*
	*	Quest Name
	*/
	UPROPERTY(EditAnywhere)
		FText QuestName;

	/*
	*	If this machine accepts our QuestActivities log, the quest is successful
	*/
	UPROPERTY(EditAnywhere)
		USM_State* QuestStateMachine;

	/*
	*	If true, the InputList is a blacklist; otherwise, it is a whitelist.
	*/
	UPROPERTY(EditAnywhere)
		uint32 bInputBlackList : 1;

	/*
	*	The blacklist/whitelist (depending on bBlackList) used to filter
	*	InputAtoms this Quest recognizes.
	*/
	UPROPERTY(EditAnywhere)
		TArray<USM_InputAtom*> InputList;
	
};

USTRUCT()
struct FQuestInProgress {
	GENERATED_BODY()

	/*
	*	Quest data asset.
	*/
	UPROPERTY(EditAnywhere)
		const UQuest* Quest;

	/*
	*	Current progress in the quest.
	*/
	UPROPERTY(EditAnywhere)
		EQuestCompletion QuestProgress;

protected:
	/*
	*	All input for this quest.  Filtred by the quest's blacklist/whitelist
	*/
	TArray<USM_InputAtom*> QuestActivities;

public:
	
	/*
	*	Returns true if he quest was completed (success or failure) by the new activity
	*/
	bool UpdateQuest(const UObject* ObjectRef, USM_InputAtom* QuestActivity) {
		// Only log activity to valid, in-game progress quests.  Check lists before logging
		if (Quest && (QuestProgress == EQuestCompletion::EQC_Started) && (Quest->bInputBlackList != Quest->InputList.Contains(QuestActivity))) {
			FSateMachineResult QuestResult;
			QuestActivities.Add(QuestActivity);
			QuestResult = Quest->QuestStateMachine->RunState(ObjectRef, QuestActivities);
			switch (QuestResult.CompletionType) {
			case ESateMachineCompletionType::Accepted:
				QuestProgress = EQuestCompletion::EQC_Succeeded;
				return true;
			case ESateMachineCompletionType::Rejected:
				QuestProgress = EQuestCompletion::EQC_Failed;
				return true;
			}
		}
		return false;
	}
};

UCLASS(ClassGroup = (Custom), meta= (BlueprintSpawnableComponent))
class PLUGINDEVELOPMENT_API UQuestStatus : public UActorComponent {

	GENERATED_BODY()

public:
	/*
	*	Sets default values for this component's properties
	*/
	UQuestStatus();

	/*
	*	Called when games starts
	*/
	virtual void BeginPlay() override;

	/*
	*	Called every frame
	*/
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	/*
	*	Add to our quest activity log.
	*	Checks to see if any unfinished quests remain
	*/
	UFUNCTION(BlueprintCallable, Category = "Quests")
		void UpdateQuests(USM_InputAtom* QuestActivity);

protected:
	/*
	*	The master list of all quest-related things we've done
	*/
	UPROPERTY(EditAnywhere)
		TArray<USM_InputAtom*> QuestActivities;

	/*
	*	The list of quests in our current game or area.
	*/
	UPROPERTY(EditAnywhere)
		TArray<FQuestInProgress> QuestList;
};
