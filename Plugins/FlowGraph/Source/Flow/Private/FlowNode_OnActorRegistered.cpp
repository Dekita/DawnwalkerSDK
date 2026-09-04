#include "FlowNode_OnActorRegistered.h"

UFlowNode_OnActorRegistered::UFlowNode_OnActorRegistered() {
    this->AllowedSignalModes.AddDefaulted(3);
    this->InputPins.AddDefaulted(2);
    this->OutputPins.AddDefaulted(3);
}


