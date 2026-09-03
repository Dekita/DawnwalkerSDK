#pragma once
#include "CoreMinimal.h"
#include "CustomAttributeModifier.h"
#include "EffectDurationData.h"
#include "CustomItemStatProvider.h"
#include "EIngredientType.h"
#include "EItemConsumableType.h"
#include "ItemBaseDataAsset.h"
#include "ItemDurationProvider.h"
#include "ItemHandle.h"
#include "Templates/SubclassOf.h"
#include "ItemIngredientDataAsset.generated.h"

class UGameplayEffect;
class UInventoryComponent;

UCLASS(Blueprintable)
class DOGWOODINVENTORY_API UItemIngredientDataAsset : public UItemBaseDataAsset, public ICustomItemStatProvider, public IItemDurationProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemConsumableType ConsumableType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> ConsumableEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIngredientType IngredientType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHealing;
    
    UItemIngredientDataAsset();


    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool CollectCustomAttributeParameters(const FItemHandle& ThisItemHandle, UInventoryComponent* UserInventory, TArray<FCustomAttributeModifier>& OutArray) const override PURE_VIRTUAL(CollectCustomAttributeParameters, return false;);
    
    UFUNCTION(BlueprintCallable)
    FEffectDurationData GetItemEffectDuration(const FItemHandle& ThisItemHandle, UInventoryComponent* UserInventory) const override PURE_VIRTUAL(GetItemEffectDuration, return FEffectDurationData{};);
    
};

