#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "SaveGameInterface.h"
#include "CurrencyRow.h"
#include "ECurrencyType.h"
#include "EEquipmentLockType.h"
#include "EInventoryFunctionalityType.h"
#include "EInventoryMode.h"
#include "EInventoryResult.h"
#include "EItemRarityType.h"
#include "EQuestCurrencyTransactionType.h"
#include "ESpecialInventoryType.h"
#include "ItemHandle.h"
#include "ItemRarityRow.h"
#include "LootGenerationInterface.h"
#include "QuestCurrencyTransactionRow.h"
#include "Templates/SubclassOf.h"
#include "InventorySubsystem.generated.h"

class UAnimInstance;
class UCurveFloat;
class UCurveTable;
class UDataTable;
class UInventoryComponent;
class UItemBaseDataAsset;
class UItemScalingCostDataAsset;
class UItemUpgradeCostDataAsset;
class ULootRarityPoolsDataAsset;
class UStoreDataAsset;
class UStoresContainerDataAsset;

UCLASS(Blueprintable)
class DOGWOODINVENTORY_API UInventorySubsystem : public UGameInstanceSubsystem, public ISaveGameInterface, public ILootGenerationInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UItemBaseDataAsset*> LoadedItemMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<ESpecialInventoryType, UInventoryComponent*> SpecialInventoryMap;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> LoadedRenderDollAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UItemScalingCostDataAsset* LoadedItemScalingCostData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UItemUpgradeCostDataAsset* LoadedItemUpgradeCostData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveFloat* LoadedItemLevelOffsetCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveFloat* LoadedItemLevelSpreadCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EItemRarityType, FItemRarityRow> ItemRaritiesData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EQuestCurrencyTransactionType, FQuestCurrencyTransactionRow> QuestCurrencyTransactionsMap;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* LoadedCurrenciesTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECurrencyType, FCurrencyRow> CurrenciesData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* LoadedItemRaritiesTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* LoadedQuestCurrencyTransactionsTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULootRarityPoolsDataAsset* LoadedLootRarityPoolsDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UStoresContainerDataAsset* LoadedShops;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UItemBaseDataAsset* TorchItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveTable* RarityPityCounterCurves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveTable* UpgradePityCounterCurve;
    
public:
    UInventorySubsystem();

    UFUNCTION(BlueprintCallable)
    EInventoryResult TransferItem(EInventoryMode InventoryMode, UInventoryComponent* SourceInventory, UInventoryComponent* DestinationInventory, const FItemHandle& ItemHandle, int32 Quantity);
    
    UFUNCTION(BlueprintCallable)
    EInventoryResult TransferCurrency(EInventoryMode InventoryMode, UInventoryComponent* SourceInventory, UInventoryComponent* DestinationInventory, ECurrencyType Currency, int32 Quantity);
    
    UFUNCTION(BlueprintCallable)
    EInventoryResult TransferAllItems(EInventoryMode InventoryMode, UInventoryComponent* SourceInventory, UInventoryComponent* DestinationInventory);
    
    UFUNCTION(BlueprintCallable)
    EInventoryResult SellAllJunk(UInventoryComponent* SourceInventory, UInventoryComponent* DestinationInventory);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsQuestItem(const FItemHandle& ItemHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFunctionalityEnabled(const EInventoryFunctionalityType Functionality) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEquipmentChangeLocked() const;
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyJunk(UInventoryComponent* TargetInventory);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetUpgradePityCounter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FItemHandle GetTorchItem();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInventoryComponent* GetSpecialStorageComponent(ESpecialInventoryType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStoreDataAsset* GetShopDataForMerchant(const FGameplayTag& MerchantTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FItemRarityRow GetRarityData(EItemRarityType InType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInventoryComponent* GetPlayerStorageComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInventoryComponent* GetPlayerInventoryComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlayerBuySellItemMultiplier(const bool bSell) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPityCounterForRarity(EItemRarityType RarityType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetLevelForHandle(const FItemHandle& Handle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEquipmentLockType GetEquipmentLockReason() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UItemBaseDataAsset* GetAssetForItem(const FItemHandle& Handle, uint8& OutLevel) const;
    
    UFUNCTION(BlueprintCallable)
    EInventoryResult BuyService(EInventoryMode InventoryMode, UInventoryComponent* SourceInventory, UInventoryComponent* DestinationInventory, const FItemHandle& ItemHandle);
    

    // Fix for true pure virtual functions not being implemented
};

