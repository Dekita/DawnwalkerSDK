#include "QuestNodeDoorManager.h"

UQuestNodeDoorManager::UQuestNodeDoorManager() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->DoorStateToSet = EDoorState::Open;
    this->bCloseImmediatelyWhenLocking = false;
    this->bModifyUnlockItem = false;
    this->bSetCrackAmount = false;
    this->NewCrackAmount = 0.00f;
    this->bSetForceOpen = false;
    this->bNewForceOpenState = false;
    this->ForceOpenDirection = EDoorOpenDirection::Forward;
}


