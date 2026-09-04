#include "FlowNode_ConditionFactInt.h"

UFlowNode_ConditionFactInt::UFlowNode_ConditionFactInt() {
    this->AllowedSignalModes.AddDefaulted(3);
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->IntValue = 0;
    this->Operation = EFlowValueComparator::Equal;
}


