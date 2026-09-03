#pragma once
#include "CoreMinimal.h"
#include "AbilityEndedData.h"
#include "GameplayAbility.h"
#include "UDashManyToAbility.generated.h"

class ADawnwalkerCharacterBase;
class UBTTaskDashToParameters;

UCLASS(Blueprintable)
class DAWNWALKER_API UUDashManyToAbility : public UGameplayAbility {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ADawnwalkerCharacterBase> InstigatorCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBTTaskDashToParameters* DashParams;
    
public:
    UUDashManyToAbility();

private:
    UFUNCTION(BlueprintCallable)
    void OnInnerDashAbilityEnd(const FAbilityEndedData& AbilityData);
    
};

