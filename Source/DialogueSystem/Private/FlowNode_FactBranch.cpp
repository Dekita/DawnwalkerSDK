#include "FlowNode_FactBranch.h"

UFlowNode_FactBranch::UFlowNode_FactBranch() {
    this->AllowedSignalModes.AddDefaulted(3);
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(2);
}


