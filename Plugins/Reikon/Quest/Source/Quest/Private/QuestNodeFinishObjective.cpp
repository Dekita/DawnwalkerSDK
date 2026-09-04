#include "QuestNodeFinishObjective.h"

UQuestNodeFinishObjective::UQuestNodeFinishObjective() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->FinalState = EObjectiveState::EOS_Success;
    this->bOverrideAlreadyFinishedObjective = false;
    this->bTriggerAutosave = false;
}


