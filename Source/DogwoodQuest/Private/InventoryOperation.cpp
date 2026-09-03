#include "InventoryOperation.h"

FInventoryOperation::FInventoryOperation() {
    this->Type = EInventoryOperationType::AddItem;
    this->Item = NULL;
    this->Count = 0;
    this->bMarkItemAsNew = false;
}

