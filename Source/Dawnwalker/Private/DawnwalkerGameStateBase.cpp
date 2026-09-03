#include "DawnwalkerGameStateBase.h"

ADawnwalkerGameStateBase::ADawnwalkerGameStateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->QuestJournal = NULL;
    this->CommunitySystem = NULL;
    this->RespawnService = NULL;
    this->VisibilitySubsystem = NULL;
    this->TimeSystem = NULL;
}

void ADawnwalkerGameStateBase::OnQuestUpdated(const UQuest* Quest, bool bSilent) {
}

void ADawnwalkerGameStateBase::OnQuestTracked(const UQuest* Quest, const FGuid& ObjectiveGuid, bool bSilent) {
}

void ADawnwalkerGameStateBase::OnQuestObjectiveUpdated(const UQuest* Quest, const FObjective& Objective, bool bSilent) {
}

void ADawnwalkerGameStateBase::OnQuestEnded(const UQuest* Quest, bool bSilent) {
}

void ADawnwalkerGameStateBase::OnQuestAdded(const UQuest* Quest, bool bSilent) {
}


