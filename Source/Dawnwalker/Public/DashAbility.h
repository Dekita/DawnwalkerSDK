#pragma once
#include "CoreMinimal.h"
#include "RebelAIActionAbility.h"
#include "DashAbility.generated.h"

class ADawnwalkerCharacterBase;
class UAbilityTask_PlayMontageAndWait;
class UAnimMontage;
class UAnimNotifyState_MotionWarping;
class UDWAbilityTask_Tick;
class UMotionWarpingComponent;
class URootMotionModifier;

UCLASS(Blueprintable)
class DAWNWALKER_API UDashAbility : public URebelAIActionAbility {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ADawnwalkerCharacterBase> InstigatorCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ADawnwalkerCharacterBase> TargetCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimNotifyState_MotionWarping* AnimNotifyClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDWAbilityTask_Tick* TickTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAbilityTask_PlayMontageAndWait* WaitTaskForMontage;
    
public:
    UDashAbility();

    UFUNCTION(BlueprintCallable)
    void TickDash(float DeltaTime);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRootMotionModifierDeactivate(UMotionWarpingComponent* MotionWarpingComp, URootMotionModifier* Modifier);
    
    UFUNCTION(BlueprintCallable)
    void OnRootMotionModifierActivate(UMotionWarpingComponent* MotionWarpingComp, URootMotionModifier* Modifier);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnMontageInterrupted();
    
    UFUNCTION(BlueprintCallable)
    void OnMontageFished();
    
};

