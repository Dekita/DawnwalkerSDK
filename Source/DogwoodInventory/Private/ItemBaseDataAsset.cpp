#include "ItemBaseDataAsset.h"

UItemBaseDataAsset::UItemBaseDataAsset() {
    this->ItemProperties = 0;
    this->ItemType = EItemType::None;
    this->ItemRarity = EItemRarityType::Common;
    this->ItemMaterial = EItemMaterialType::GenericItem;
    this->ItemLevel = 0;
    this->MinItemLevelVariation = 0;
    this->MaxItemLevelVariation = 0;
    this->MinItemLevel = 0;
    this->MaxItemLevel = 0;
    this->bOverrideLevelRequirementSpread = false;
    this->bOverrideUpgradeLevelSpread = false;
    this->LevelRequirementSpread = 0;
    this->UpgradeLevelSpread = 0;
    this->ItemWeight = 0.00f;
    this->CostCurrency = ECurrencyType::Coin;
    this->SellCost = 0;
    this->BuyCost = 0;
    this->IsSingleUse = false;
    this->Combo = NULL;
    this->BrokenItem = NULL;
}

bool UItemBaseDataAsset::ShouldGenerateLevel() const {
    return false;
}

bool UItemBaseDataAsset::IsItemLevelRequirementMet(const FItemHandle& ItemHandle, const UInventoryComponent* UserInventory) const {
    return false;
}

bool UItemBaseDataAsset::HasItemLevel() const {
    return false;
}

int32 UItemBaseDataAsset::GetUpgradeLevelSpread() const {
    return 0;
}

int32 UItemBaseDataAsset::GetUpgradeCost(const FItemHandle& ItemHandle, const UInventoryComponent* UserInventory, int32 TargetLevel) const {
    return 0;
}

int32 UItemBaseDataAsset::GetSellCost(const UObject* WorldContextObject, int32 Level) const {
    return 0;
}

TArray<EEquipmentSlotType> UItemBaseDataAsset::GetMatchingEquipmentSlots(const UObject* WorldContextObject) {
    return TArray<EEquipmentSlotType>();
}

bool UItemBaseDataAsset::GetItemProperty(EItemProperty PropertyFlag) const {
    return false;
}

FText UItemBaseDataAsset::GetItemName() const {
    return FText::GetEmpty();
}

int32 UItemBaseDataAsset::GetItemLevelSpread(const FItemHandle& ItemHandle, const UInventoryComponent* UserInventory) const {
    return 0;
}

int32 UItemBaseDataAsset::GetItemLevelRequirement(const FItemHandle& ItemHandle, const UInventoryComponent* UserInventory) const {
    return 0;
}

int32 UItemBaseDataAsset::GetBuyCost(const UObject* WorldContextObject, int32 Level) const {
    return 0;
}

bool UItemBaseDataAsset::CheckItemProperty(EItemProperty PropertyFlag) {
    return false;
}

EItemUsableResult UItemBaseDataAsset::CanUseItem(const FItemHandle& ThisItemHandle, UInventoryComponent* UserInventory) const {
    return EItemUsableResult::None;
}


