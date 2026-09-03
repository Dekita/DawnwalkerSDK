#include "RebelAIStateTreeTask_AIStub_SetCooldown.h"

FRebelAIStateTreeTask_AIStub_SetCooldown::FRebelAIStateTreeTask_AIStub_SetCooldown() {
    this->ApplicationTime = ERebelAIStateTreeTask_AIStub_SetTagCooldown_ApplicationTime::OnEnter;
    this->CooldownIdentificationMode = ERebelAIIdentificationMode::Name;
    this->bGlobal = false;
    this->bAddToExisting = false;
}

