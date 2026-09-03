#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EDayPhase.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ItemHandle.h"
#include "InventoryBlueprintFunctionLibrary.generated.h"

class UAbilitySystemComponent;
class UItemBaseDataAsset;
class UItemClothingDataAsset;
class UItemWeaponDataAsset;
class ULootTableDataAsset;
class UObject;

UCLASS(Blueprintable)
class DOGWOODINVENTORY_API UInventoryBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UInventoryBlueprintFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void RebuildLootOptions(const ULootTableDataAsset* LootTable, TMap<FName, bool>& OutOptions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_ItemHandleItemHandle(const FItemHandle& A, const FItemHandle& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FItemHandle MakeInvalidItemHandle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="InWorldContextObject"))
    static bool IsValid(const UObject* InWorldContextObject, const FItemHandle& Handle);
    
    UFUNCTION(BlueprintCallable)
    static void InvalidateHandle(UPARAM(Ref) FItemHandle& Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetWeaponRarityProficiencyPenalty(const UItemWeaponDataAsset* Weapon, const UAbilitySystemComponent* AbilitySystemComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetWeaponProficiencyPenalty(const UItemWeaponDataAsset* Weapon, const UAbilitySystemComponent* AbilitySystemComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetLoadoutIndexFromDayPhase(EDayPhase DayPhase);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EDayPhase GetLoadoutDayPhaseFromIndex(int32 LoadoutIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="InWorldContextObject"))
    static FItemHandle GetItemHandle(const UObject* InWorldContextObject, const UItemBaseDataAsset* ItemAsset, uint8 ItemLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetArmorWeightProficiencyPenalty(const UItemClothingDataAsset* Clothing, const UAbilitySystemComponent* AbilitySystemComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetArmorRarityProficiencyPenalty(const UItemClothingDataAsset* Clothing, const UAbilitySystemComponent* AbilitySystemComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetArmorProficiencyPenalty(const UItemClothingDataAsset* Clothing, const UAbilitySystemComponent* AbilitySystemComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static uint8 GenerateItemLevel(const UObject* WorldContextObject, const UItemBaseDataAsset* InItem, uint8 OwnerLevel, const FRandomStream& RandomStream);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_ItemHandleItemHandle(const FItemHandle& A, const FItemHandle& B);
    
};

