#pragma once
#include "CoreMinimal.h"
#include "CustomAttributeModifier.h"
#include "CustomEffectParameter.h"
#include "EHealthType.h"
#include "CustomItemStatProvider.h"
#include "EItemWeaponSubtype.h"
#include "EWeaponDamageEdge.h"
#include "ItemBaseDataAsset.h"
#include "ItemHandle.h"
#include "ItemWeaponDataAsset.generated.h"

class UAbilitySystemComponent;
class UInventoryComponent;

UCLASS(Blueprintable)
class DOGWOODINVENTORY_API UItemWeaponDataAsset : public UItemBaseDataAsset, public ICustomItemStatProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemWeaponSubtype WeaponType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UObject> WeaponBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weapon_Damage_Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weapon_Damage_Max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomEffectParameter> CustomEffectParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHealthType Weapon_DamageAgainstHealthType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weapon_DamageAgainstHealthTypeMultiplier;
    
    UItemWeaponDataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWeaponDamage(const FItemHandle& ThisItemHandle, EWeaponDamageEdge RangeEdge, const UAbilitySystemComponent* AbilitySystemComponent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDamagePerSecond(uint8 Level, const UAbilitySystemComponent* AbilitySystemComponent);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool CollectCustomAttributeParameters(const FItemHandle& ThisItemHandle, UInventoryComponent* UserInventory, TArray<FCustomAttributeModifier>& OutArray) const override PURE_VIRTUAL(CollectCustomAttributeParameters, return false;);
    
};

