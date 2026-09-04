#include "FlowNode_Timer.h"

UFlowNode_Timer::UFlowNode_Timer() {
    this->AllowedSignalModes.AddDefaulted(3);
    this->InputPins.AddDefaulted(3);
    this->OutputPins.AddDefaulted(3);
    this->CompletionTime = 1.00f;
    this->StepTime = 0.00f;
    this->SumOfSteps = 0.00f;
    this->RemainingCompletionTime = 0.00f;
    this->RemainingStepTime = 0.00f;
}

void UFlowNode_Timer::OnStep() {
}

void UFlowNode_Timer::OnCompletion() {
}


