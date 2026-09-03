#include "QuestNodeDamageCharacter.h"

UQuestNodeDamageCharacter::UQuestNodeDamageCharacter() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->Mode = EDamageCharacterMode::FlatValue;
    this->bDoNotKill = false;
    this->DamageAmount = 0.00f;
}


