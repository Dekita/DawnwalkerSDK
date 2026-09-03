#include "FlowNode_RemoveFact.h"

UFlowNode_RemoveFact::UFlowNode_RemoveFact() {
    this->AllowedSignalModes.AddDefaulted(3);
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}


