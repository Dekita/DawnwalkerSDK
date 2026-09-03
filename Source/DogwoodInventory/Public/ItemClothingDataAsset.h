#pragma once
#include "CoreMinimal.h"
#include "CustomAttributeModifier.h"
#include "CustomEffectParameter.h"
#include "CustomItemStatProvider.h"
#include "EArmorType.h"
#include "EClothingSoundType.h"
#include "EEquipmentSlotType.h"
#include "ItemBaseDataAsset.h"
#include "ItemHandle.h"
#include "ItemClothingDataAsset.generated.h"

class UAbilitySystemComponent;
class UInventoryComponent;

UCLASS(Blueprintable)
class DOGWOODINVENTORY_API UItemClothingDataAsset : public UItemBaseDataAsset, public ICustomItemStatProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEquipmentSlotType EquipmentSlotType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EClothingSoundType SoundType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EArmorType ArmorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Armor_Toughness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomEffectParameter> CustomEffectParameters;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSetUpEquipmentSlots;
    
public:
    UItemClothingDataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsArmor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetArmorToughness(const FItemHandle& ThisItemHandle, const UAbilitySystemComponent* AbilitySystemComponent) const;
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool CollectCustomAttributeParameters(const FItemHandle& ThisItemHandle, UInventoryComponent* UserInventory, TArray<FCustomAttributeModifier>& OutArray) const override PURE_VIRTUAL(CollectCustomAttributeParameters, return false;);
    
};

