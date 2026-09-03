#include "ItemIngredientDataAsset.h"
#include "EItemType.h"

UItemIngredientDataAsset::UItemIngredientDataAsset() {
    this->ItemProperties = 17;
    this->ItemType = EItemType::Ingredient;
    this->ConsumableType = EItemConsumableType::Human;
    this->IngredientType = EIngredientType::Default;
    this->bIsHealing = false;
}


