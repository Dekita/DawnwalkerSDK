#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "SaveGameInterface.h"
#include "CraftingRecipeRow.h"
#include "CraftingRecipeUnlockedDynamicDelegateDelegate.h"
#include "ECraftingResult.h"
#include "ItemHandle.h"
#include "ItemRefilledDelegateDelegate.h"
#include "ItemsRefilledDelegateDelegate.h"
#include "CraftingSubsystem.generated.h"

class UAbilitySystemComponent;
class UDataTable;
class UInventoryComponent;
class UInventorySubsystem;
class UItemBaseDataAsset;
class UTimeSystemInterface;

UCLASS(Blueprintable)
class DOGWOODINVENTORY_API UCraftingSubsystem : public UWorldSubsystem, public ISaveGameInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemRefilledDelegate OnItemAutoRefilled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemsRefilledDelegate OnBeforeItemsAutoRefilled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemsRefilledDelegate OnItemsAutoRefilled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCraftingRecipeUnlockedDynamicDelegate OnCraftingRecipeUnlockedDynamic;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInventorySubsystem* InventorySystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTimeSystemInterface* TimeSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* LoadedCraftingRecipesTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FItemHandle, FCraftingRecipeRow> LoadedCraftingRecipeMapByItemHandle;
    
public:
    UCraftingSubsystem();

    UFUNCTION(BlueprintCallable)
    bool UnlockCraftingRecipeForItem(const FItemHandle& ItemHandle);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAllCraftingRecipes();
    
    UFUNCTION(BlueprintCallable)
    void RefillDailyFreeItems();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRecipeForItemUnlocked(const FItemHandle& ItemHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsItemCraftable(const FItemHandle& ItemHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<UItemBaseDataAsset*, int32> GetRequiredIngredients(const FCraftingRecipeRow& Recipe) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCraftingRecipeRow GetRecipeForItem(const FItemHandle& ItemHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInventoryComponent* GetPlayerInventoryComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerCraftLimitOverride() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerCraftIngredientsModifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerCraftDailyFreeItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAbilitySystemComponent* GetPlayerASC() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemMaxCraftCount(const FItemHandle& ItemHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemCraftLimit(const FItemHandle& CraftableItemHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCraftingQuantityMultiplier(const FCraftingRecipeRow& Recipe) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FItemHandle> GetAvailableItemRecipes() const;
    
    UFUNCTION(BlueprintCallable)
    ECraftingResult CraftItemAll(const FItemHandle& ItemHandle);
    
    UFUNCTION(BlueprintCallable)
    ECraftingResult CraftItem(const FItemHandle& ItemHandle, const int32 GeneratedQuantity, const bool bForFree, int32 CraftQuantity);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECraftingResult CanItemBeCrafted(const FItemHandle& ItemHandle, const bool bForFree, int32 CraftQuantity) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreCraftLimitsEnabled() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddIngredientsForAllCraftingRecipes(const int32 CraftableItems);
    

    // Fix for true pure virtual functions not being implemented
};

