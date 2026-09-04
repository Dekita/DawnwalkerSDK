#include "FlowNode_SetFactInt.h"

UFlowNode_SetFactInt::UFlowNode_SetFactInt() {
    this->AllowedSignalModes.AddDefaulted(3);
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->Value = 0;
}


