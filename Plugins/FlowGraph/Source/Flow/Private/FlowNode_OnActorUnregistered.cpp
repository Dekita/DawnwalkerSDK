#include "FlowNode_OnActorUnregistered.h"

UFlowNode_OnActorUnregistered::UFlowNode_OnActorUnregistered() {
    this->AllowedSignalModes.AddDefaulted(3);
    this->InputPins.AddDefaulted(2);
    this->OutputPins.AddDefaulted(3);
}


