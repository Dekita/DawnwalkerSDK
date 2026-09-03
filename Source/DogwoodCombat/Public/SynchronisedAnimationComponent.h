#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ScalableFloat.h"
#include "ECombatState.h"
#include "ESynchronisedAnimationRotationMode.h"
#include "OnCameraAnimationEndedDelegate.h"
#include "OnCameraAnimationStartedDelegate.h"
#include "SynchronisedAnimationComponent.generated.h"

class ACharacter;
class UAnimMontage;
class UCurveFloat;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DOGWOODCOMBAT_API USynchronisedAnimationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCameraAnimationStarted OnCameraAnimationStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCameraAnimationEnded OnCameraAnimationEnded;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat SyncSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CameraTransitionCurve;
    
public:
    USynchronisedAnimationComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void ProgressCameraTransition(float Time);
    
public:
    UFUNCTION(BlueprintCallable)
    float Play(ACharacter* InTargetCharacter, UAnimMontage* InstigatorAnimation, UAnimMontage* TargetAnimation, bool AnimateCamera, ESynchronisedAnimationRotationMode RotationMode, bool SnapTargetOnly, bool Lerp, bool Sweep);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnStateChanged(const ECombatState NewState);
    
};

