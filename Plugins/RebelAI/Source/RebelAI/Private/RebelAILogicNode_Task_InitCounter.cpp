#include "RebelAILogicNode_Task_InitCounter.h"

FRebelAILogicNode_Task_InitCounter::FRebelAILogicNode_Task_InitCounter() {
    this->CounterIdentificationMode = ERebelAIIdentificationMode::Name;
    this->InitValue = 0;
    this->bUseRandomRangeForInitValue = false;
    this->bGlobal = false;
}

