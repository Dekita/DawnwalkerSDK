#include "FlowNode_CustomPin.h"

UFlowNode_CustomPin::UFlowNode_CustomPin() {
    this->AllowedSignalModes.AddDefaulted(3);
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}


