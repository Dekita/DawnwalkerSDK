#include "QuestNodeVampireAbilitiesManager.h"

UQuestNodeVampireAbilitiesManager::UQuestNodeVampireAbilitiesManager() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->bModifyIsAntigravUnlocked = false;
    this->bModifyIsShadowstepUnlocked = false;
    this->bModifyIsClawRideUnlocked = false;
    this->bModifyIsFogFormUnlocked = false;
    this->bModifyIsMagicUnlocked = false;
    this->bIsAntigravUnlocked = false;
    this->bIsShadowstepUnlocked = false;
    this->bIsClawRideUnlocked = false;
    this->bIsFogFormUnlocked = false;
    this->bIsMagicUnlocked = false;
}


