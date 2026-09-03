#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "ERebelLookAtMode.h"
#include "ERebelRotationMode.h"
#include "ERebelRotationSyncMode.h"
#include "ERebelVelocitySyncMode.h"
#include "RebelCharacterMovementAsyncTickFunction.h"
#include "RebelLocomotionAnimTransitionRules.h"
#include "RebelStackedAnimTransitionRules.h"
#include "RebelStackedCharacterMovementProfile.h"
#include "RebelStackedLookAtMode.h"
#include "RebelStackedRotationMode.h"
#include "RebelCharacterMovement.generated.h"

class UAnimInstance;
class URebelCharacterMovementProfile;
class URebelTraversalComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class REBELLOCOMOTION_API URebelCharacterMovement : public UCharacterMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroundTraceDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceLockToNavMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAsync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallSafeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableWallHitResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallSlideMinNormalDot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallHitMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallNewHitNormalMaxDot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallHitBlockingInterpolator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallHitUnblockingInterpolator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RootSpeedXCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RootSpeedYCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RootSpeedZCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RootSpeedWeightCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RootYawSpeedCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RootYawSpeedWeightCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RootSpeedScaleDeltaCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TurnTransitionCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StartTransitionCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StopTransitionCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PivotTransitionCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationSmoothingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationSmoothingRate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRebelStackedCharacterMovementProfile> MovementProfileStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRebelStackedRotationMode> RotationModeStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRebelStackedLookAtMode> LookAtModeStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRebelStackedAnimTransitionRules> TransitionRulesStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URebelCharacterMovementProfile* CurrentMovementProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ERebelRotationMode CurrentRotationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ERebelLookAtMode CurrentLookAtMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ERebelVelocitySyncMode CurrentVelocitySyncMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ERebelRotationSyncMode CurrentRotationSyncMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimInstance* CachedAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URebelTraversalComponent* TraversalComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRebelCharacterMovementAsyncTickFunction AsyncMovementTickFunction;
    
public:
    URebelCharacterMovement(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateWarpTargetYaw();
    
    UFUNCTION(BlueprintCallable)
    void SetWarpTargetYaw(float InTargetYaw);
    
    UFUNCTION(BlueprintCallable)
    void SetTickOptimizationEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideInputSize(float Value);
    
    UFUNCTION(BlueprintCallable)
    void ResetOverrideInputSize();
    
    UFUNCTION(BlueprintCallable)
    int32 PushTransitionRules(const FRebelLocomotionAnimTransitionRules& TransitionRules, const uint8 Priority);
    
    UFUNCTION(BlueprintCallable)
    int32 PushRotationMode(const ERebelRotationMode RotationMode, const uint8 Priority);
    
    UFUNCTION(BlueprintCallable)
    int32 PushMovementProfile(const URebelCharacterMovementProfile* MovementProfile);
    
    UFUNCTION(BlueprintCallable)
    int32 PushLookAtMode(const ERebelLookAtMode LookAtMode, const uint8 Priority);
    
    UFUNCTION(BlueprintCallable)
    bool PopTransitionRules(int32 Handle);
    
    UFUNCTION(BlueprintCallable)
    bool PopRotationMode(int32 Handle);
    
    UFUNCTION(BlueprintCallable)
    bool PopMovementProfile(int32 Handle);
    
    UFUNCTION(BlueprintCallable)
    bool PopLookAtMode(int32 Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMovementInput() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTargetInFOV() const;
    
    UFUNCTION(BlueprintCallable)
    float GetOverrideInputSize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLockToNavMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsFacingTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInputAngle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERebelRotationMode GetCurrentRotationMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URebelCharacterMovementProfile* GetCurrentMovementProfile() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanJump() const;
    
};

