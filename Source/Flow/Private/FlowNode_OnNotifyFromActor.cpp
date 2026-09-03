#include "FlowNode_OnNotifyFromActor.h"

UFlowNode_OnNotifyFromActor::UFlowNode_OnNotifyFromActor() {
    this->AllowedSignalModes.AddDefaulted(3);
    this->InputPins.AddDefaulted(2);
    this->OutputPins.AddDefaulted(3);
    this->bRetroactive = false;
}


