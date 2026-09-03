#include "FlowNode_DayPhaseBranch.h"

UFlowNode_DayPhaseBranch::UFlowNode_DayPhaseBranch() {
    this->AllowedSignalModes.AddDefaulted(3);
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(2);
    this->DayPhase = EDayPhase::None;
}


