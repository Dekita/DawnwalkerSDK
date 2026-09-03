#pragma once
#include "CoreMinimal.h"
#include "CombatFocusAttackAbilityBase.h"
#include "CombatFocusVampireAbility.generated.h"

class AActor;
class UAbilitySystemComponent;

UCLASS(Blueprintable)
class DOGWOODCOMBAT_API UCombatFocusVampireAbility : public UCombatFocusAttackAbilityBase {
    GENERATED_BODY()
public:
    UCombatFocusVampireAbility();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool VampireAbilityConditionPassed(const AActor* Target) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBloodDrinkingStarted(float DrinkingDuration, float DrinkingDelay);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBloodDrinkingEnded();
    
    UFUNCTION(BlueprintCallable)
    float GetBloodDrinkValueToHeal(const UAbilitySystemComponent* TargetASC, const UAbilitySystemComponent* PlayerASC);
    
    UFUNCTION(BlueprintCallable)
    float GetBloodDrinkDamageToDeal(float BloodHealed, int32 AbilityLevel, const UAbilitySystemComponent* TargetASC);
    
};

