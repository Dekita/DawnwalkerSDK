#include "FlowNode_Checkpoint.h"

UFlowNode_Checkpoint::UFlowNode_Checkpoint() {
    this->AllowedSignalModes.AddDefaulted(3);
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}


