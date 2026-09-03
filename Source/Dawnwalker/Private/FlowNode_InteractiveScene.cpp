#include "FlowNode_InteractiveScene.h"

UFlowNode_InteractiveScene::UFlowNode_InteractiveScene() {
    this->AllowedSignalModes.AddDefaulted(3);
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->bAlreadyEndedInteractiveScene = false;
}

void UFlowNode_InteractiveScene::OnFinishedInteractiveScene() {
}


