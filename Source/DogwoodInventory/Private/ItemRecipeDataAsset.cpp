#include "ItemRecipeDataAsset.h"
#include "EItemType.h"

UItemRecipeDataAsset::UItemRecipeDataAsset() {
    this->ItemProperties = 1;
    this->ItemType = EItemType::Recipe;
    this->IsSingleUse = true;
}

bool UItemRecipeDataAsset::IsRecipeKnown(const UObject* WorldContextObject) const {
    return false;
}


