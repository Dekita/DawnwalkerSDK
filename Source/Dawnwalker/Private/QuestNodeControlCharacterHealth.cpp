#include "QuestNodeControlCharacterHealth.h"

UQuestNodeControlCharacterHealth::UQuestNodeControlCharacterHealth() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->bModifyHealth = false;
    this->HealthPercent = 0.50f;
    this->bModifyHealthLock = false;
    this->bSetHealthLocked = false;
    this->bModifyBlood = false;
    this->BloodPercent = 0.50f;
    this->bModifyBloodLock = false;
    this->bSetBloodLocked = false;
}


