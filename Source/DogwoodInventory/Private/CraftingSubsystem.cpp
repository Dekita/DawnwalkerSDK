#include "CraftingSubsystem.h"

UCraftingSubsystem::UCraftingSubsystem() {
    this->InventorySystem = NULL;
    this->TimeSystem = NULL;
    this->LoadedCraftingRecipesTable = NULL;
}

bool UCraftingSubsystem::UnlockCraftingRecipeForItem(const FItemHandle& ItemHandle) {
    return false;
}

void UCraftingSubsystem::UnlockAllCraftingRecipes() {
}

void UCraftingSubsystem::RefillDailyFreeItems() {
}

bool UCraftingSubsystem::IsRecipeForItemUnlocked(const FItemHandle& ItemHandle) const {
    return false;
}

bool UCraftingSubsystem::IsItemCraftable(const FItemHandle& ItemHandle) const {
    return false;
}

TMap<UItemBaseDataAsset*, int32> UCraftingSubsystem::GetRequiredIngredients(const FCraftingRecipeRow& Recipe) const {
    return TMap<UItemBaseDataAsset*, int32>();
}

FCraftingRecipeRow UCraftingSubsystem::GetRecipeForItem(const FItemHandle& ItemHandle) const {
    return FCraftingRecipeRow{};
}

UInventoryComponent* UCraftingSubsystem::GetPlayerInventoryComponent() const {
    return NULL;
}

int32 UCraftingSubsystem::GetPlayerCraftLimitOverride() const {
    return 0;
}

int32 UCraftingSubsystem::GetPlayerCraftIngredientsModifier() const {
    return 0;
}

int32 UCraftingSubsystem::GetPlayerCraftDailyFreeItems() const {
    return 0;
}

UAbilitySystemComponent* UCraftingSubsystem::GetPlayerASC() const {
    return NULL;
}

int32 UCraftingSubsystem::GetItemMaxCraftCount(const FItemHandle& ItemHandle) const {
    return 0;
}

int32 UCraftingSubsystem::GetItemCraftLimit(const FItemHandle& CraftableItemHandle) const {
    return 0;
}

int32 UCraftingSubsystem::GetCraftingQuantityMultiplier(const FCraftingRecipeRow& Recipe) const {
    return 0;
}

TArray<FItemHandle> UCraftingSubsystem::GetAvailableItemRecipes() const {
    return TArray<FItemHandle>();
}

ECraftingResult UCraftingSubsystem::CraftItemAll(const FItemHandle& ItemHandle) {
    return ECraftingResult::None;
}

ECraftingResult UCraftingSubsystem::CraftItem(const FItemHandle& ItemHandle, const int32 GeneratedQuantity, const bool bForFree, int32 CraftQuantity) {
    return ECraftingResult::None;
}

ECraftingResult UCraftingSubsystem::CanItemBeCrafted(const FItemHandle& ItemHandle, const bool bForFree, int32 CraftQuantity) const {
    return ECraftingResult::None;
}

bool UCraftingSubsystem::AreCraftLimitsEnabled() const {
    return false;
}

void UCraftingSubsystem::AddIngredientsForAllCraftingRecipes(const int32 CraftableItems) {
}


