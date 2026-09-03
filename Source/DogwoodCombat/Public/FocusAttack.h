#pragma once
#include "CoreMinimal.h"
#include "GameplayAbility.h"
#include "GameplayEventData.h"
#include "FocusAttack.generated.h"

class AActor;
class UAbilitySystemComponent;
class UAnimMontage;
class UCurveFloat;

UCLASS(Blueprintable)
class DOGWOODCOMBAT_API UFocusAttack : public UGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAttackDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuccessChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* DashForwardMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DashCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DashSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAbilitySystemComponent> TargetAbilitySystemComponent;
    
public:
    UFocusAttack();

protected:
    UFUNCTION(BlueprintCallable)
    void Perform();
    
    UFUNCTION(BlueprintCallable)
    void OnTargetReceived(FGameplayEventData Payload);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSuccess();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFailure();
    
};

