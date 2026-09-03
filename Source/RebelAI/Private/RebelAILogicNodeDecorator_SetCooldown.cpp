#include "RebelAILogicNodeDecorator_SetCooldown.h"

FRebelAILogicNodeDecorator_SetCooldown::FRebelAILogicNodeDecorator_SetCooldown() {
    this->CooldownIdentificationMode = ERebelAIIdentificationMode::Name;
    this->CooldownDuration = 0.00f;
    this->CooldownDeflection = 0.00f;
    this->CooldownApplyMode = ERebelAILogicNodeDecorator_SetCooldown_CooldownApplyMode::None;
    this->bPostActivation = false;
    this->bGlobal = false;
    this->bAddToExisting = false;
    this->bAddAdditionalCooldownPerDifficulty = false;
    this->AdditionalAIvsAIDuration = 0.00f;
}

