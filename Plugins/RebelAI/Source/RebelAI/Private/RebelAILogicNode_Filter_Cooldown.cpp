#include "RebelAILogicNode_Filter_Cooldown.h"

FRebelAILogicNode_Filter_Cooldown::FRebelAILogicNode_Filter_Cooldown() {
    this->CooldownIdentificationMode = ERebelAIIdentificationMode::Name;
    this->bNot = false;
}

