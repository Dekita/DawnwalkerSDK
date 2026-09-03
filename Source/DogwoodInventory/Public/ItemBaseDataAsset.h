#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ECurrencyType.h"
#include "EEquipmentSlotType.h"
#include "EItemMaterialType.h"
#include "EItemProperty.h"
#include "EItemRarityType.h"
#include "EItemType.h"
#include "EItemUsableResult.h"
#include "ItemHandle.h"
#include "ItemBaseDataAsset.generated.h"

class UInventoryComponent;
class UItemBaseDataAsset;
class UItemComboDataAsset;
class UObject;
class UTexture2D;

UCLASS(Abstract, Blueprintable)
class DOGWOODINVENTORY_API UItemBaseDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemId;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ItemProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ItemDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemType ItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemRarityType ItemRarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemMaterialType ItemMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ItemLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinItemLevelVariation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxItemLevelVariation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinItemLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxItemLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideLevelRequirementSpread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideUpgradeLevelSpread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LevelRequirementSpread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UpgradeLevelSpread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ItemWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECurrencyType CostCurrency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SellCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BuyCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSingleUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemComboDataAsset* Combo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> ItemImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemBaseDataAsset* BrokenItem;
    
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EEquipmentSlotType> MatchingEquipmentSlots;
    
public:
    UItemBaseDataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldGenerateLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsItemLevelRequirementMet(const FItemHandle& ItemHandle, const UInventoryComponent* UserInventory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasItemLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUpgradeLevelSpread() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUpgradeCost(const FItemHandle& ItemHandle, const UInventoryComponent* UserInventory, int32 TargetLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    int32 GetSellCost(const UObject* WorldContextObject, int32 Level) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    TArray<EEquipmentSlotType> GetMatchingEquipmentSlots(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetItemProperty(EItemProperty PropertyFlag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetItemName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemLevelSpread(const FItemHandle& ItemHandle, const UInventoryComponent* UserInventory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemLevelRequirement(const FItemHandle& ItemHandle, const UInventoryComponent* UserInventory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    int32 GetBuyCost(const UObject* WorldContextObject, int32 Level) const;
    
    UFUNCTION(BlueprintCallable)
    bool CheckItemProperty(EItemProperty PropertyFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EItemUsableResult CanUseItem(const FItemHandle& ThisItemHandle, UInventoryComponent* UserInventory) const;
    
};

