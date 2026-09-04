#include "FlowNode_SetSpeakerVisible.h"

UFlowNode_SetSpeakerVisible::UFlowNode_SetSpeakerVisible() {
    this->AllowedSignalModes.AddDefaulted(3);
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->bVisible = true;
}


