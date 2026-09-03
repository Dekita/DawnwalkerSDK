#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "RebelAICombatActionAbility.h"
#include "DawnwalkerAIAttackAbility.generated.h"

class UAnimMontage;

UCLASS(Abstract, Blueprintable)
class DAWNWALKER_API UDawnwalkerAIAttackAbility : public URebelAICombatActionAbility {
    GENERATED_BODY()
public:
    UDawnwalkerAIAttackAbility();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimMontage* BP_GetAttackMontage(FGameplayTag CombatModeTag, FGameplayTagContainer Tags) const;
    
};

