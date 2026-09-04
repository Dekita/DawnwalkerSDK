#include "RebelAIParams_Reaction_PersuadeToStopForbiddenAction.h"

FRebelAIParams_Reaction_PersuadeToStopForbiddenAction::FRebelAIParams_Reaction_PersuadeToStopForbiddenAction() {
    this->bStartCombatIfRepeated = false;
    this->RepeatitionsNumber = 0;
    this->bDrawWeapon = false;
    this->bDrawWeaponOnStart = false;
    this->DrawWeaponAfterTime = 0.00f;
    this->DrawWeaponAfterRepetitions = 0;
    this->bFollow = false;
    this->StartCombatTimer = 0.00f;
    this->ReactionStopTimer = 0.00f;
    this->FollowDistance = 0.00f;
}

