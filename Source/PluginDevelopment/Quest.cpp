// Fill out your copyright notice in the Description page of Project Settings.

#include "Quest.h"


UQuestStatus::UQuestStatus() {
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	bWantsBeginPlay = true;
	PrimaryComponentTick.bCanEverTick = true;
}

// Called when the game starts
void UQuestStatus::BeginPlay() {
	Super::BeginPlay();

	// ...

}


// Called every frame
void UQuestStatus::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) {
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UQuestStatus::UpdateQuests(USM_InputAtom* QuestActivity) {
	
	TArray<int32> RecentlyCompletedQuests;
	
	// Update the master list of everything we've ever done.
	QuestActivities.Add(QuestActivity);

	// Update individual quests (if they care about this activity) and see if they are complete.
	for (int32 i = QuestList.Num() - 1; i >= 0; --i) {
		if (QuestList[i].UpdateQuest(this, QuestActivity)) {
			RecentlyCompletedQuests.Add(i);
		}
	}

	/*
	*	Process completed quests after update
	*	This way a completed quest can't inject out-of-order input atoms to other quests
	*/
	for (int32 i = RecentlyCompletedQuests.Num() - 1; i >= 0; --i) {
		FQuestInProgress& QIP = QuestList[RecentlyCompletedQuests[i]];
		if (QIP.QuestProgress == EQuestCompletion::EQC_Succeeded) {
			QIP.Quest->OnSucceeded(this);
		}
		else {
			QIP.Quest->OnFailed(this);
		}
		RecentlyCompletedQuests.RemoveAtSwap(i);
	}
}

bool UQuestStatus::BeginQuest(const UQuest * Quest) {

	return false;
}

void UQuest::OnSucceeded(UQuestStatus * QuestStatus) const {
	UE_LOG(LogTemp, Warning, TEXT("Quest \"%s\" succeeded!"), *QuestName.ToString());
}

void UQuest::OnFailed(UQuestStatus * QuestStatus) const {
	UE_LOG(LogTemp, Warning, TEXT("Quest \"%s\" failed!"), *QuestName.ToString());
}
