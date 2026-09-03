#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayAbilityTargetDataHandle.h"
#include "GameplayTagContainer.h"
#include "CombatFocusAbilityBase.h"
#include "EAttackStrength.h"
#include "CombatFocusAttackAbilityBase.generated.h"

class AActor;
class APlayerController;
class UCombatComponentBase;

UCLASS(Abstract, Blueprintable)
class DOGWOODCOMBAT_API UCombatFocusAttackAbilityBase : public UCombatFocusAbilityBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVampireSword;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVampireClaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHumanSword;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHumanHandToHand;
    
public:
    UCombatFocusAttackAbilityBase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    void TryPlayBloodEffects(AActor* Target, EAttackStrength AttackStrength, UPARAM(Ref) FVector& HitLocation, UCombatComponentBase* DefenderCombatComponent) const;
    
    UFUNCTION(BlueprintCallable)
    void OverrideRestoreSwordFight(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTargetHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FGameplayTagContainer GetTagsAppliedToEffectAbilitySpecific() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    float GetHitChanceForPlayer(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    float GetHitChance(UPARAM(Ref) FGameplayAbilityTargetDataHandle& TargetData);
    
};

