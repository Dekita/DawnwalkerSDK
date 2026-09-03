#include "QuestNodeControlCharacterStamina.h"

UQuestNodeControlCharacterStamina::UQuestNodeControlCharacterStamina() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->bModifyStamina = false;
    this->StaminaPercent = 0.50f;
    this->bModifyStaminaLock = false;
    this->bSetStaminaLocked = false;
}


