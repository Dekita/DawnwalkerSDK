#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PermanentBuffProvider.generated.h"

class UAbilitySystemComponent;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class UPermanentBuffProvider : public UInterface {
    GENERATED_BODY()
};

class IPermanentBuffProvider : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual float GetBuffMultiplier(UAbilitySystemComponent* OwnerASC) const PURE_VIRTUAL(GetBuffMultiplier, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    virtual float GetBuffFactCounterAttributeValue(UAbilitySystemComponent* OwnerASC) const PURE_VIRTUAL(GetBuffFactCounterAttributeValue, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    virtual FText GetBuffDescription(UAbilitySystemComponent* OwnerASC) PURE_VIRTUAL(GetBuffDescription, return FText::GetEmpty(););
    
};

