#include "FlowNode_RemoveItemsFromInventory.h"

UFlowNode_RemoveItemsFromInventory::UFlowNode_RemoveItemsFromInventory() {
    this->AllowedSignalModes.AddDefaulted(3);
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(4);
    this->InventorySubsystem = NULL;
}


