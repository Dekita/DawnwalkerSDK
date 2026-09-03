#include "InventorySubsystem.h"

UInventorySubsystem::UInventorySubsystem() {
    this->LoadedRenderDollAnimInstance = NULL;
    this->LoadedItemScalingCostData = NULL;
    this->LoadedItemUpgradeCostData = NULL;
    this->LoadedItemLevelOffsetCurve = NULL;
    this->LoadedItemLevelSpreadCurve = NULL;
    this->LoadedCurrenciesTable = NULL;
    this->LoadedItemRaritiesTable = NULL;
    this->LoadedQuestCurrencyTransactionsTable = NULL;
    this->LoadedLootRarityPoolsDataAsset = NULL;
    this->LoadedShops = NULL;
    this->TorchItem = NULL;
    this->RarityPityCounterCurves = NULL;
    this->UpgradePityCounterCurve = NULL;
}

EInventoryResult UInventorySubsystem::TransferItem(EInventoryMode InventoryMode, UInventoryComponent* SourceInventory, UInventoryComponent* DestinationInventory, const FItemHandle& ItemHandle, int32 Quantity) {
    return EInventoryResult::None;
}

EInventoryResult UInventorySubsystem::TransferCurrency(EInventoryMode InventoryMode, UInventoryComponent* SourceInventory, UInventoryComponent* DestinationInventory, ECurrencyType Currency, int32 Quantity) {
    return EInventoryResult::None;
}

EInventoryResult UInventorySubsystem::TransferAllItems(EInventoryMode InventoryMode, UInventoryComponent* SourceInventory, UInventoryComponent* DestinationInventory) {
    return EInventoryResult::None;
}

EInventoryResult UInventorySubsystem::SellAllJunk(UInventoryComponent* SourceInventory, UInventoryComponent* DestinationInventory) {
    return EInventoryResult::None;
}

bool UInventorySubsystem::IsQuestItem(const FItemHandle& ItemHandle) const {
    return false;
}

bool UInventorySubsystem::IsFunctionalityEnabled(const EInventoryFunctionalityType Functionality) const {
    return false;
}

bool UInventorySubsystem::IsEquipmentChangeLocked() const {
    return false;
}

bool UInventorySubsystem::HasAnyJunk(UInventoryComponent* TargetInventory) {
    return false;
}

float UInventorySubsystem::GetUpgradePityCounter() {
    return 0.0f;
}

FItemHandle UInventorySubsystem::GetTorchItem() {
    return FItemHandle{};
}

UInventoryComponent* UInventorySubsystem::GetSpecialStorageComponent(ESpecialInventoryType Type) {
    return NULL;
}

UStoreDataAsset* UInventorySubsystem::GetShopDataForMerchant(const FGameplayTag& MerchantTag) {
    return NULL;
}

FItemRarityRow UInventorySubsystem::GetRarityData(EItemRarityType InType) const {
    return FItemRarityRow{};
}

UInventoryComponent* UInventorySubsystem::GetPlayerStorageComponent() {
    return NULL;
}

UInventoryComponent* UInventorySubsystem::GetPlayerInventoryComponent() {
    return NULL;
}

float UInventorySubsystem::GetPlayerBuySellItemMultiplier(const bool bSell) const {
    return 0.0f;
}

float UInventorySubsystem::GetPityCounterForRarity(EItemRarityType RarityType) {
    return 0.0f;
}

uint8 UInventorySubsystem::GetLevelForHandle(const FItemHandle& Handle) const {
    return 0;
}

EEquipmentLockType UInventorySubsystem::GetEquipmentLockReason() const {
    return EEquipmentLockType::None;
}

UItemBaseDataAsset* UInventorySubsystem::GetAssetForItem(const FItemHandle& Handle, uint8& OutLevel) const {
    return NULL;
}

EInventoryResult UInventorySubsystem::BuyService(EInventoryMode InventoryMode, UInventoryComponent* SourceInventory, UInventoryComponent* DestinationInventory, const FItemHandle& ItemHandle) {
    return EInventoryResult::None;
}


