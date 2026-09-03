#pragma once
#include "CoreMinimal.h"
#include "CustomAttributeModifier.h"
#include "EffectDurationData.h"
#include "GameplayTagContainer.h"
#include "CustomItemStatProvider.h"
#include "ItemBaseDataAsset.h"
#include "ItemDurationProvider.h"
#include "ItemHandle.h"
#include "Templates/SubclassOf.h"
#include "ItemServiceDataAsset.generated.h"

class UGameplayEffect;
class UInventoryComponent;

UCLASS(Blueprintable)
class DOGWOODINVENTORY_API UItemServiceDataAsset : public UItemBaseDataAsset, public ICustomItemStatProvider, public IItemDurationProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> ConsumableEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FactDBTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FactIntFactValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TimeSegmentCost;
    
    UItemServiceDataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTimeSegmentCost(UInventoryComponent* UserInventory) const;
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool CollectCustomAttributeParameters(const FItemHandle& ThisItemHandle, UInventoryComponent* UserInventory, TArray<FCustomAttributeModifier>& OutArray) const override PURE_VIRTUAL(CollectCustomAttributeParameters, return false;);
    
    UFUNCTION(BlueprintCallable)
    FEffectDurationData GetItemEffectDuration(const FItemHandle& ThisItemHandle, UInventoryComponent* UserInventory) const override PURE_VIRTUAL(GetItemEffectDuration, return FEffectDurationData{};);
    
};

