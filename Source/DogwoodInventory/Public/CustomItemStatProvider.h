#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CustomAttributeModifier.h"
#include "ItemHandle.h"
#include "CustomItemStatProvider.generated.h"

class UInventoryComponent;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class UCustomItemStatProvider : public UInterface {
    GENERATED_BODY()
};

class ICustomItemStatProvider : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual bool CollectCustomAttributeParameters(const FItemHandle& ThisItemHandle, UInventoryComponent* UserInventory, TArray<FCustomAttributeModifier>& OutArray) const PURE_VIRTUAL(CollectCustomAttributeParameters, return false;);
    
};

