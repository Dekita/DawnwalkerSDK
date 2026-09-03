#include "FlowNode_FactBranchInt.h"

UFlowNode_FactBranchInt::UFlowNode_FactBranchInt() {
    this->AllowedSignalModes.AddDefaulted(3);
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(2);
    this->IntValue = 0;
    this->Operation = EFlowValueComparator::Equal;
}


