#include "FlowNode_CustomEventBase.h"

UFlowNode_CustomEventBase::UFlowNode_CustomEventBase() {
    this->AllowedSignalModes.AddDefaulted(2);
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}


