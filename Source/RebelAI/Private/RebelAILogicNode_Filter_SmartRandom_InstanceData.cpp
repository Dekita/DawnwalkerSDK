#include "RebelAILogicNode_Filter_SmartRandom_InstanceData.h"

FRebelAILogicNode_Filter_SmartRandom_InstanceData::FRebelAILogicNode_Filter_SmartRandom_InstanceData() {
    this->BaseThreshold = 0.00f;
    this->IncreaseOnFailure = 0.00f;
    this->DecreaseOnSuccess = 0.00f;
    this->GradualReturn = 0.00f;
    this->bDebugLogChance = false;
    this->bOverrideBasedOnLevel = false;
}

