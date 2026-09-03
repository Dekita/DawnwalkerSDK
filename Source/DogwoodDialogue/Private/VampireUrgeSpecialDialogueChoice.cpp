#include "VampireUrgeSpecialDialogueChoice.h"

UVampireUrgeSpecialDialogueChoice::UVampireUrgeSpecialDialogueChoice() {
    this->ReplacementMode = EReplacementMode::ReplaceRandom;
    this->DisplayMode = EVampireUrgeDisplayMode::FullFunctionality;
    this->bShowWhenInHumanForm = false;
    this->bForceHungerLevel = false;
    this->ForcedHungerLevel = EVampireHunger::High;
}


