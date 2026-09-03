#include "FlowNode_Placeholder.h"

UFlowNode_Placeholder::UFlowNode_Placeholder() {
    this->AllowedSignalModes.AddDefaulted(3);
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(2);
}


