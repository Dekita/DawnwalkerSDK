#include "QuestNodeKillCharacter.h"

UQuestNodeKillCharacter::UQuestNodeKillCharacter() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->DeathAnimation = NULL;
    this->bPlayDefaultDeathAnimation = true;
    this->bMuteDeathSound = false;
    this->bKillByDrinking = false;
}


