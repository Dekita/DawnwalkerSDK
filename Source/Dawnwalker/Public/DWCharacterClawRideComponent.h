#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "Engine/HitResult.h"
#include "EDawnwalkerClawRideState.h"
#include "RebelGeomFloorTestFlags.h"
#include "Templates/SubclassOf.h"
#include "DWCharacterClawRideComponent.generated.h"

class UAkAudioEvent;
class UAnimInstance;
class UAnimMontage;
class UCurveFloat;
class UDawnwalkerTraversalConditionSet;
class UFeedbackBehavior;
class UNiagaraSystem;
class URebelLocomotionMontageSet;
class UTimelineComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DAWNWALKER_API UDWCharacterClawRideComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* TimelineCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTimelineComponent* TransitionTimeline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LedgeCheckDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClawRideCornerDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDawnwalkerTraversalConditionSet* ClawRideInstantStartCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDawnwalkerTraversalConditionSet* CanClawRideOnLedgeCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelGeomFloorTestFlags ClawRideCornerTestFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LedgeCheckVerticalOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroundDetectionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinRideableAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRideableAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToAccelerate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToDecelerate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDownwardsSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSidewaysMovementSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxWallCavityDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartingSpeed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double WallAdjustmentRate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxClimbUpDistance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MinimumLedgeHeight;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CameraBoomOffset;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CameraPitchAfterStart;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CameraPitchAfterEnd;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CameraStartTransitionTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CameraEndTransitionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelLocomotionMontageSet* StartDropMontageSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelLocomotionMontageSet* StartClawRideMontageSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* EndDropMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ClawRideToAntiGravMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* StartRidingMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* StopRidingMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ClimbMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* JumpAwayMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> ClawRideLayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EffectName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFeedbackBehavior* Effect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* SlideParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldFallingFromLedgeStartClawRide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bShouldRide;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHitResult RideHitResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHitResult GroundHitResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform TransitionStartTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform TransitionTargetTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FQuat StartControlRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FQuat TargetControlRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector StartingCameraBoomOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAntiGravPossible;
    
public:
    UDWCharacterClawRideComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TransitionEnd();
    
    UFUNCTION(BlueprintCallable)
    bool RequestClawRide();
    
protected:
    UFUNCTION()
    void OnMontageNotifyBegin(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
    
    UFUNCTION(BlueprintCallable)
    void OnMontageBlendedIn(UAnimMontage* Montage);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnJumpInput(bool bValue);
    
    UFUNCTION(BlueprintCallable)
    void OnClawRideInput(bool bValue);
    
    UFUNCTION(BlueprintCallable)
    void OnAntiGravInput(bool bValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLedgeLookingDownAllowed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsClawRiding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDawnwalkerClawRideState GetClawRideState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBestDirectionFromLedge(FVector& BestDirection) const;
    
    UFUNCTION(BlueprintCallable)
    void ExitClawRideGracefully();
    
};

