#include "FlowNode_SetEndFade.h"

UFlowNode_SetEndFade::UFlowNode_SetEndFade() {
    this->AllowedSignalModes.AddDefaulted(3);
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->bPerformFadeOutOnEnd = true;
    this->bPerformFadeInOnEnd = true;
}


