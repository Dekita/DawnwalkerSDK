#include "FlowNode_LogicalANDTwoOutputs.h"

UFlowNode_LogicalANDTwoOutputs::UFlowNode_LogicalANDTwoOutputs() {
    this->AllowedSignalModes.AddDefaulted(3);
    this->InputPins.AddDefaulted(2);
    this->OutputPins.AddDefaulted(2);
}


