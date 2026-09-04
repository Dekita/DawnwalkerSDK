#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EffectDurationData.h"
#include "ItemHandle.h"
#include "ItemDurationProvider.generated.h"

class UInventoryComponent;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class UItemDurationProvider : public UInterface {
    GENERATED_BODY()
};

class IItemDurationProvider : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual FEffectDurationData GetItemEffectDuration(const FItemHandle& ThisItemHandle, UInventoryComponent* UserInventory) const PURE_VIRTUAL(GetItemEffectDuration, return FEffectDurationData{};);
    
};

