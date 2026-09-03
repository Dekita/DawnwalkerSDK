#include "InventoryUIListItem.h"

UInventoryUIListItem::UInventoryUIListItem() {
    this->Type = EInventoryListItemType::EmptyPadding;
    this->ParentInventoryView = NULL;
    this->ItemInstanceIdx = -1;
}

UItemBaseDataAsset* UInventoryUIListItem::GetItemAsset(const UObject* InWorldContextObject) const {
    return NULL;
}


