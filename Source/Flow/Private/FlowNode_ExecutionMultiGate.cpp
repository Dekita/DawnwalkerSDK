#include "FlowNode_ExecutionMultiGate.h"

UFlowNode_ExecutionMultiGate::UFlowNode_ExecutionMultiGate() {
    this->AllowedSignalModes.AddDefaulted(2);
    this->InputPins.AddDefaulted(2);
    this->OutputPins.AddDefaulted(2);
    this->bRandom = false;
    this->bLoop = false;
    this->StartIndex = -1;
    this->NextOutput = 0;
}


