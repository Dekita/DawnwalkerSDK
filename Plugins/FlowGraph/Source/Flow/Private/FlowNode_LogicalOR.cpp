#include "FlowNode_LogicalOR.h"

UFlowNode_LogicalOR::UFlowNode_LogicalOR() {
    this->AllowedSignalModes.AddDefaulted(3);
    this->InputPins.AddDefaulted(4);
    this->OutputPins.AddDefaulted(1);
    this->bEnabled = true;
    this->ExecutionLimit = 1;
    this->ExecutionCount = 0;
}


