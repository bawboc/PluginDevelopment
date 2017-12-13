// Fill out your copyright notice in the Description page of Project Settings.

#include "SM_State.h"

USM_State::USM_State() 
{
	bLoopByDefault = true;
}

USM_State* USM_Branch::TryBranch(const UObject* RefObject, const TArray<USM_InputAtom*>& DataSource,
	int32 DataIndex, int32 &OutDataIndex) 
{
	OutDataIndex = DataIndex;
	if (!AcceptableInputs.Num() || (DataSource.IsValidIndex(DataIndex)) && AcceptableInputs.Contains(DataSource[DataIndex])) 
	{
		++OutDataIndex;
		return bReverseInputTest ? nullptr : DestinationState;
	}
	
	return bReverseInputTest ? DestinationState : nullptr;
}

FSateMachineResult USM_State::RunState(const UObject* RefObject,
	const TArray<USM_InputAtom*>& DataSource, int32 DataIndex, int32 RemainingSteps)
{
	bool bMustEndNow = (bTerminateImmediately || !DataSource.IsValidIndex(DataIndex));

	if (RemainingSteps && !bMustEndNow) {
		USM_State* DestinationState = nullptr;
		int32 DestinationDataIndex = DataIndex;

		for (auto i = 0; i < InstancedBranches.Num(); ++i) {
			if (InstancedBranches[i]) {
				DestinationState = InstancedBranches[i]->TryBranch(RefObject, DataSource, DataIndex, DestinationDataIndex);
				if (DestinationState) {
					return DestinationState->RunState(RefObject, DataSource, DestinationDataIndex, RemainingSteps - 1);
				}
			}
		}

		// No acceptable branch, so end unless we're told to loop
		if (bLoopByDefault) {
			return LoopState(RefObject, DataSource, DataIndex, RemainingSteps);
		}
		bMustEndNow = true;
	}

	FSateMachineResult SMR;
	SMR.FinalState = this;
	SMR.DataIndex = DataIndex;
	SMR.CompletionType = bMustEndNow ? CompletionType : ESateMachineCompletionType::OutOfSteps;

	return SMR;
}

FSateMachineResult USM_State::LoopState(const UObject * RefObject,
	const TArray<USM_InputAtom*>& DataSource, int32 DataIndex, int32 RemainingSteps) {

	return RunState(RefObject, DataSource, DataIndex + 1, RemainingSteps - 1);

}
