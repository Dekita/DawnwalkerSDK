#include "InventoryBlueprintFunctionLibrary.h"

UInventoryBlueprintFunctionLibrary::UInventoryBlueprintFunctionLibrary() {
}

void UInventoryBlueprintFunctionLibrary::RebuildLootOptions(const ULootTableDataAsset* LootTable, TMap<FName, bool>& OutOptions) {
}

bool UInventoryBlueprintFunctionLibrary::NotEqual_ItemHandleItemHandle(const FItemHandle& A, const FItemHandle& B) {
    return false;
}

FItemHandle UInventoryBlueprintFunctionLibrary::MakeInvalidItemHandle() {
    return FItemHandle{};
}

bool UInventoryBlueprintFunctionLibrary::IsValid(const UObject* InWorldContextObject, const FItemHandle& Handle) {
    return false;
}

void UInventoryBlueprintFunctionLibrary::InvalidateHandle(FItemHandle& Handle) {
}

float UInventoryBlueprintFunctionLibrary::GetWeaponRarityProficiencyPenalty(const UItemWeaponDataAsset* Weapon, const UAbilitySystemComponent* AbilitySystemComponent) {
    return 0.0f;
}

float UInventoryBlueprintFunctionLibrary::GetWeaponProficiencyPenalty(const UItemWeaponDataAsset* Weapon, const UAbilitySystemComponent* AbilitySystemComponent) {
    return 0.0f;
}

int32 UInventoryBlueprintFunctionLibrary::GetLoadoutIndexFromDayPhase(EDayPhase DayPhase) {
    return 0;
}

EDayPhase UInventoryBlueprintFunctionLibrary::GetLoadoutDayPhaseFromIndex(int32 LoadoutIndex) {
    return EDayPhase::None;
}

FItemHandle UInventoryBlueprintFunctionLibrary::GetItemHandle(const UObject* InWorldContextObject, const UItemBaseDataAsset* ItemAsset, uint8 ItemLevel) {
    return FItemHandle{};
}

float UInventoryBlueprintFunctionLibrary::GetArmorWeightProficiencyPenalty(const UItemClothingDataAsset* Clothing, const UAbilitySystemComponent* AbilitySystemComponent) {
    return 0.0f;
}

float UInventoryBlueprintFunctionLibrary::GetArmorRarityProficiencyPenalty(const UItemClothingDataAsset* Clothing, const UAbilitySystemComponent* AbilitySystemComponent) {
    return 0.0f;
}

float UInventoryBlueprintFunctionLibrary::GetArmorProficiencyPenalty(const UItemClothingDataAsset* Clothing, const UAbilitySystemComponent* AbilitySystemComponent) {
    return 0.0f;
}

uint8 UInventoryBlueprintFunctionLibrary::GenerateItemLevel(const UObject* WorldContextObject, const UItemBaseDataAsset* InItem, uint8 OwnerLevel, const FRandomStream& RandomStream) {
    return 0;
}

bool UInventoryBlueprintFunctionLibrary::EqualEqual_ItemHandleItemHandle(const FItemHandle& A, const FItemHandle& B) {
    return false;
}


