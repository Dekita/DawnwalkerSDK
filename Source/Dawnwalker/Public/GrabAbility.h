#pragma once
#include "CoreMinimal.h"
#include "ECombatState.h"
#include "GameplayAbility.h"
#include "GrabAbility.generated.h"

class ADawnwalkerCharacterBase;
class UAnimMontage;
class UCombatAction;
class UCombatComponentBase;
class USynchronisedAnimationComponent;

UCLASS(Blueprintable)
class DAWNWALKER_API UGrabAbility : public UGameplayAbility {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* InstigatorMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TargetMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RecoveryTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ADawnwalkerCharacterBase> TargetCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ADawnwalkerCharacterBase> InstigatorCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UCombatComponentBase> InstigatorCombat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UCombatComponentBase> TargetCombat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USynchronisedAnimationComponent> SynchronisedAnimationComponent;
    
public:
    UGrabAbility();

private:
    UFUNCTION(BlueprintCallable)
    void ReleaseTarget();
    
    UFUNCTION(BlueprintCallable)
    void PlayAttack();
    
    UFUNCTION(BlueprintCallable)
    void OnCombatStateChanged(const ECombatState NewState);
    
    UFUNCTION(BlueprintCallable)
    void End();
    
    UFUNCTION(BlueprintCallable)
    void ApplyDamage(UCombatComponentBase* InInstigator, UCombatAction* CombatAction);
    
};

