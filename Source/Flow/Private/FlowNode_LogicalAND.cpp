#include "FlowNode_LogicalAND.h"

UFlowNode_LogicalAND::UFlowNode_LogicalAND() {
    this->AllowedSignalModes.AddDefaulted(3);
    this->InputPins.AddDefaulted(2);
    this->OutputPins.AddDefaulted(1);
}


