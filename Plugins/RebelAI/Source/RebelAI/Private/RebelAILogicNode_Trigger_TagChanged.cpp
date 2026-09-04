#include "RebelAILogicNode_Trigger_TagChanged.h"

FRebelAILogicNode_Trigger_TagChanged::FRebelAILogicNode_Trigger_TagChanged() {
    this->bTriggerWhenTagAdded = false;
    this->bTriggerWhenTagRemoved = false;
    this->bTriggerOnAnyCountChange = false;
    this->bCanTriggerOnRegistration = false;
}

