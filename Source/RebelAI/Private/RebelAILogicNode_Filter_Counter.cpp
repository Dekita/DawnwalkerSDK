#include "RebelAILogicNode_Filter_Counter.h"

FRebelAILogicNode_Filter_Counter::FRebelAILogicNode_Filter_Counter() {
    this->CounterIdentificationMode = ERebelAIIdentificationMode::Name;
    this->Comparison = ERebelAICompareOperation::Equal;
    this->ValueToCompare = 0;
    this->bRandomCompareValue = false;
    this->ValueToCompareMin = 0;
    this->ValueToCompareMax = 0;
}

