#pragma once
#include "CoreMinimal.h"
#include "GameplayAbility.h"
#include "DogwoodGameplayAbilityBase.generated.h"

UCLASS(Abstract, Blueprintable)
class DOGWOODABILITYSYSTEM_API UDogwoodGameplayAbilityBase : public UGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bManualCostHandling;
    
public:
    UDogwoodGameplayAbilityBase();

    UFUNCTION(BlueprintCallable)
    void SetCheckCost(bool bInCheckCost);
    
};

