#include "QuestNodeAddObjective.h"

UQuestNodeAddObjective::UQuestNodeAddObjective() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->CompletePrevious = EObjectiveState::EOS_None;
    this->MaxCount = 0;
    this->bForceTrack = false;
    this->TrackedQuestType = ETrackedQuestType::User;
    this->bTriggerAutosave = true;
    this->bReactivateQuestIfNeeded = false;
}


