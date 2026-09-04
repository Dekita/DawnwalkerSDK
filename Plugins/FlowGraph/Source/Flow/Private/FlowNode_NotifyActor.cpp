#include "FlowNode_NotifyActor.h"

UFlowNode_NotifyActor::UFlowNode_NotifyActor() {
    this->AllowedSignalModes.AddDefaulted(3);
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->bExactMatch = true;
    this->NetMode = EFlowNetMode::Authority;
}


