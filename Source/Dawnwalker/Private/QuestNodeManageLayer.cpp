#include "QuestNodeManageLayer.h"

UQuestNodeManageLayer::UQuestNodeManageLayer() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(2);
    this->NewState = EDataLayerRuntimeState::Unloaded;
}


