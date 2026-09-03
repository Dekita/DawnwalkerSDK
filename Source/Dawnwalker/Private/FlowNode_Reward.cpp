#include "FlowNode_Reward.h"

UFlowNode_Reward::UFlowNode_Reward() {
    this->AllowedSignalModes.AddDefaulted(3);
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->InventorySubsystem = NULL;
}


