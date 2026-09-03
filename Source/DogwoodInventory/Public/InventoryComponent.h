#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "ECurrencyType.h"
#include "EEquipmentSlotType.h"
#include "EInventoryResult.h"
#include "EInventoryType.h"
#include "EItemRarityType.h"
#include "ELootGenerationSource.h"
#include "InventoryItem.h"
#include "ItemEquipDelegateBPDelegate.h"
#include "ItemHandle.h"
#include "LootTableItemConfig.h"
#include "NativeOnActiveLoadoutChangedDelegate.h"
#include "OnCharDevItemUsedDelegate.h"
#include "OnInventoryContentsChangedDelegate.h"
#include "OnInventorySoldDelegate.h"
#include "OnItemRemovedDelegate.h"
#include "OnPostGameReadyDelegate.h"
#include "OnReadableUsedDelegate.h"
#include "OnWeightExceededChangedDelegate.h"
#include "InventoryComponent.generated.h"

class UAbilitySystemComponent;
class UInventoryComponent;
class UInventorySubsystem;
class UItemBaseDataAsset;
class ULootTableDataAsset;
class UPersistencyComponent;
class UReadableDataAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DOGWOODINVENTORY_API UInventoryComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UItemBaseDataAsset*, FInventoryItem> InventoryItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EEquipmentSlotType, UItemBaseDataAsset*> EquipmentSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeightLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULootTableDataAsset* LootTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLootTableItemConfig> AdditionalLoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> LootTableOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<EItemRarityType> LootTableEquipmentRarityOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LootRegionOverride;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemEquipDelegateBP OnItemEquippedBP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPostGameReady OnPostGameReady;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReadableUsed OnReadableUsed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharDevItemUsed OnCharDevItemUsed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInventoryContentsChanged OnInventoryContentsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInventorySold OnInventorySold;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemRemoved OnItemRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWeightExceededChanged OnWeightExceededChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNativeOnActiveLoadoutChanged OnActiveLoadoutChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseFallbackInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPersistencyComponent* PersistencyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInventorySubsystem* InventorySystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWeightExceeded;
    
public:
    UInventoryComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    EInventoryResult UseItem(const FItemHandle& ItemHandle);
    
    UFUNCTION(BlueprintCallable)
    EInventoryResult UpgradeItem(UInventoryComponent* OtherInventoryComponent, const FItemHandle& ItemHandle, int32 TargetLevel, FItemHandle& OutUpgradedHandle, bool bCapToOwnerLevel);
    
    UFUNCTION(BlueprintCallable)
    EInventoryResult UnequipItem(EEquipmentSlotType FromSlot, bool bAllLoadouts);
    
    UFUNCTION(BlueprintCallable)
    EInventoryResult TryEquipItemInSlot(const FItemHandle& ItemHandle, EEquipmentSlotType Slot, bool bUnequipIfAlreadyEquipped);
    
    UFUNCTION(BlueprintCallable)
    EInventoryResult TryEquipItem(const FItemHandle& ItemHandle, bool bUnequipIfAlreadyEquipped);
    
    UFUNCTION(BlueprintCallable)
    EInventoryResult TryAddItem(const FItemHandle& ItemHandle, int32 Quantity, bool bSkipNewItemCheck);
    
    UFUNCTION(BlueprintCallable)
    EInventoryResult TryAddAndEquipItem(const FItemHandle& ItemHandle, bool bSkipNewItemCheck);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveLoadout(int32 LoadoutIndex);
    
    UFUNCTION(BlueprintCallable)
    void RestoreLoadoutsFromCache();
    
    UFUNCTION(BlueprintCallable)
    EInventoryResult RequestItemUnequip(EEquipmentSlotType FromSlot, bool bAllLoadouts);
    
    UFUNCTION(BlueprintCallable)
    void RemoveShopItemsFromInventory();
    
    UFUNCTION(BlueprintCallable)
    EInventoryResult RemoveItem(const FItemHandle& ItemHandle, int32 Quantity);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void NotifyReadableUsed(const UReadableDataAsset* Readable) const;
    
    UFUNCTION(BlueprintCallable)
    void NotifyNewItemViewed(const FItemHandle& InHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsItemEquippedAtAnyLevel(const FItemHandle& ItemHandle, int32 LoadoutIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsItemEquipped(const FItemHandle& ItemHandle, int32 LoadoutIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsItemConsideredNew(const FItemHandle& ItemHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEmpty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasWeightlessJunk() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EInventoryResult HasItem(const FItemHandle& ItemHandle, int32 RequiredQuantity, bool bMatchAssetOnly) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWeightLimit() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<EEquipmentSlotType> GetValidEquipmentSlotsForItem(const FItemHandle& Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSkillBookItemCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRegionLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOwnerLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAbilitySystemComponent* GetOwnerAbilitySystemComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetMerchantTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLootBaseLevel(EInventoryType InventoryType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FItemHandle GetItemToLoot(const FItemHandle& ItemHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemQuantity(const FItemHandle& Item, bool bMatchAssetOnly) const;
    
    UFUNCTION(BlueprintCallable)
    FItemHandle GetHandleForAssetInInventory(const UItemBaseDataAsset* ItemAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFittingQuantityInQuantityLimit(const FItemHandle& ItemHandle, int32 DesiredQuantity) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FItemHandle GetEquippedItem(EEquipmentSlotType InSlot, int32 PrimaryLoadout, bool bSearchAllLoadouts) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentWeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FInventoryItem> GetCurrentItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrencyQuantity(ECurrencyType Currency) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrencyAmount(ECurrencyType Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetActiveLoadoutIndex();
    
    UFUNCTION(BlueprintCallable)
    void GenerateBrokenLoot();
    
    UFUNCTION(BlueprintCallable)
    void GenerateAndCommitLoot(ELootGenerationSource GenerationSource);
    
    UFUNCTION(BlueprintCallable)
    EInventoryResult CleanEquipmentSlot(EEquipmentSlotType FromSlot, bool bAllLoadouts);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanExceedWeightLimit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBeLooted() const;
    
    UFUNCTION(BlueprintCallable)
    void CacheLoadouts();
    
    UFUNCTION(BlueprintCallable)
    void AddShopItemsToInventory();
    
    UFUNCTION(BlueprintCallable)
    EInventoryResult AddCurrency(ECurrencyType Currency, int32 Quantity);
    
};

