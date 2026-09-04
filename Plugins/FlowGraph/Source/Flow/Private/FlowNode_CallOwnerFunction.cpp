#include "FlowNode_CallOwnerFunction.h"

UFlowNode_CallOwnerFunction::UFlowNode_CallOwnerFunction() {
    this->AllowedSignalModes.AddDefaulted(3);
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->Params = NULL;
}


