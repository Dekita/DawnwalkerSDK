#include "FlowNode_Counter.h"

UFlowNode_Counter::UFlowNode_Counter() {
    this->AllowedSignalModes.AddDefaulted(3);
    this->InputPins.AddDefaulted(3);
    this->OutputPins.AddDefaulted(4);
    this->Goal = 2;
    this->CurrentSum = 0;
}


