#include "FlowNode_ExecutionSequence.h"

UFlowNode_ExecutionSequence::UFlowNode_ExecutionSequence() {
    this->AllowedSignalModes.AddDefaulted(2);
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(2);
    this->bSavePinExecutionState = true;
}


