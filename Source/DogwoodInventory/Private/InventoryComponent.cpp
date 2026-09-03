#include "InventoryComponent.h"

UInventoryComponent::UInventoryComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WeightLimit = 0.00f;
    this->LootTable = NULL;
    this->bUseFallbackInventory = false;
    this->PersistencyComponent = NULL;
    this->InventorySystem = NULL;
    this->bWeightExceeded = false;
}

EInventoryResult UInventoryComponent::UseItem(const FItemHandle& ItemHandle) {
    return EInventoryResult::None;
}

EInventoryResult UInventoryComponent::UpgradeItem(UInventoryComponent* OtherInventoryComponent, const FItemHandle& ItemHandle, int32 TargetLevel, FItemHandle& OutUpgradedHandle, bool bCapToOwnerLevel) {
    return EInventoryResult::None;
}

EInventoryResult UInventoryComponent::UnequipItem(EEquipmentSlotType FromSlot, bool bAllLoadouts) {
    return EInventoryResult::None;
}

EInventoryResult UInventoryComponent::TryEquipItemInSlot(const FItemHandle& ItemHandle, EEquipmentSlotType Slot, bool bUnequipIfAlreadyEquipped) {
    return EInventoryResult::None;
}

EInventoryResult UInventoryComponent::TryEquipItem(const FItemHandle& ItemHandle, bool bUnequipIfAlreadyEquipped) {
    return EInventoryResult::None;
}

EInventoryResult UInventoryComponent::TryAddItem(const FItemHandle& ItemHandle, int32 Quantity, bool bSkipNewItemCheck) {
    return EInventoryResult::None;
}

EInventoryResult UInventoryComponent::TryAddAndEquipItem(const FItemHandle& ItemHandle, bool bSkipNewItemCheck) {
    return EInventoryResult::None;
}

void UInventoryComponent::SetActiveLoadout(int32 LoadoutIndex) {
}

void UInventoryComponent::RestoreLoadoutsFromCache() {
}

EInventoryResult UInventoryComponent::RequestItemUnequip(EEquipmentSlotType FromSlot, bool bAllLoadouts) {
    return EInventoryResult::None;
}

void UInventoryComponent::RemoveShopItemsFromInventory() {
}

EInventoryResult UInventoryComponent::RemoveItem(const FItemHandle& ItemHandle, int32 Quantity) {
    return EInventoryResult::None;
}

void UInventoryComponent::NotifyReadableUsed(const UReadableDataAsset* Readable) const {
}

void UInventoryComponent::NotifyNewItemViewed(const FItemHandle& InHandle) {
}

bool UInventoryComponent::IsItemEquippedAtAnyLevel(const FItemHandle& ItemHandle, int32 LoadoutIndex) const {
    return false;
}

bool UInventoryComponent::IsItemEquipped(const FItemHandle& ItemHandle, int32 LoadoutIndex) const {
    return false;
}

bool UInventoryComponent::IsItemConsideredNew(const FItemHandle& ItemHandle) const {
    return false;
}

bool UInventoryComponent::IsEmpty() const {
    return false;
}

bool UInventoryComponent::HasWeightlessJunk() const {
    return false;
}

EInventoryResult UInventoryComponent::HasItem(const FItemHandle& ItemHandle, int32 RequiredQuantity, bool bMatchAssetOnly) const {
    return EInventoryResult::None;
}

float UInventoryComponent::GetWeightLimit() const {
    return 0.0f;
}

TArray<EEquipmentSlotType> UInventoryComponent::GetValidEquipmentSlotsForItem(const FItemHandle& Item) {
    return TArray<EEquipmentSlotType>();
}

int32 UInventoryComponent::GetSkillBookItemCount() const {
    return 0;
}

int32 UInventoryComponent::GetRegionLevel() const {
    return 0;
}

int32 UInventoryComponent::GetOwnerLevel() const {
    return 0;
}

UAbilitySystemComponent* UInventoryComponent::GetOwnerAbilitySystemComponent() const {
    return NULL;
}

FGameplayTag UInventoryComponent::GetMerchantTag() const {
    return FGameplayTag{};
}

int32 UInventoryComponent::GetLootBaseLevel(EInventoryType InventoryType) const {
    return 0;
}

FItemHandle UInventoryComponent::GetItemToLoot(const FItemHandle& ItemHandle) const {
    return FItemHandle{};
}

int32 UInventoryComponent::GetItemQuantity(const FItemHandle& Item, bool bMatchAssetOnly) const {
    return 0;
}

FItemHandle UInventoryComponent::GetHandleForAssetInInventory(const UItemBaseDataAsset* ItemAsset) {
    return FItemHandle{};
}

int32 UInventoryComponent::GetFittingQuantityInQuantityLimit(const FItemHandle& ItemHandle, int32 DesiredQuantity) const {
    return 0;
}

FItemHandle UInventoryComponent::GetEquippedItem(EEquipmentSlotType InSlot, int32 PrimaryLoadout, bool bSearchAllLoadouts) const {
    return FItemHandle{};
}

float UInventoryComponent::GetCurrentWeight() const {
    return 0.0f;
}

TArray<FInventoryItem> UInventoryComponent::GetCurrentItems() const {
    return TArray<FInventoryItem>();
}

int32 UInventoryComponent::GetCurrencyQuantity(ECurrencyType Currency) const {
    return 0;
}

int32 UInventoryComponent::GetCurrencyAmount(ECurrencyType Type) const {
    return 0;
}

int32 UInventoryComponent::GetActiveLoadoutIndex() {
    return 0;
}

void UInventoryComponent::GenerateBrokenLoot() {
}

void UInventoryComponent::GenerateAndCommitLoot(ELootGenerationSource GenerationSource) {
}

EInventoryResult UInventoryComponent::CleanEquipmentSlot(EEquipmentSlotType FromSlot, bool bAllLoadouts) {
    return EInventoryResult::None;
}

bool UInventoryComponent::CanExceedWeightLimit() const {
    return false;
}

bool UInventoryComponent::CanBeLooted() const {
    return false;
}

void UInventoryComponent::CacheLoadouts() {
}

void UInventoryComponent::AddShopItemsToInventory() {
}

EInventoryResult UInventoryComponent::AddCurrency(ECurrencyType Currency, int32 Quantity) {
    return EInventoryResult::None;
}


