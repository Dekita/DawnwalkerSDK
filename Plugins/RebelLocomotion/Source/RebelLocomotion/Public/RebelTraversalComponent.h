#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "ERebelLocomotionMantleType.h"
#include "RebelLocomotionComponentAndTransform.h"
#include "RebelLocomotionMantleAsset.h"
#include "RebelLocomotionMantleParams.h"
#include "RebelLocomotionMantleTraceSettings.h"
#include "RebelTraversalComponent.generated.h"

class ACharacter;
class UCurveFloat;
class URebelCharacterMovement;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class REBELLOCOMOTION_API URebelTraversalComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableMantling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MantleTestDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowMantleThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelLocomotionMantleAsset LowMantleSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelLocomotionMantleAsset HighMantleSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelLocomotionMantleAsset FallingMantleSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelLocomotionMantleAsset VaultingMantleSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelLocomotionMantleAsset VaultingDownSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelLocomotionMantleTraceSettings GroundedTraceSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelLocomotionMantleTraceSettings FallingTraceSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* MantleTimelineCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MantleObjectDetectionProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> WalkableSurfaceDetectionChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RagdollActiveTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelLocomotionMantleParams MantleParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelLocomotionComponentAndTransform MantleLedgeLS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MantleHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelLocomotionComponentAndTransform GroundWS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform MantleTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform MantleActualStartOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform MantleAnimatedStartOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceptableVelocityWhileMantling;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* OwnerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URebelCharacterMovement* MovementComponent;
    
public:
    URebelTraversalComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnRagdolInputTagActivated(const FGameplayTag CallbackTag, int32 NewCount);
    
    UFUNCTION(BlueprintCallable)
    void OnJumpActivated();
    
public:
    UFUNCTION(BlueprintCallable)
    void MantleUpdate(float BlendIn);
    
    UFUNCTION(BlueprintCallable)
    bool MantleStart(const FRebelLocomotionComponentAndTransform& MantleLedgeWS, ERebelLocomotionMantleType MantleType);
    
    UFUNCTION(BlueprintCallable)
    void MantleEnd();
    
    UFUNCTION(BlueprintCallable)
    bool MantleCheck(const FRebelLocomotionMantleTraceSettings& TraceSettings, TEnumAsByte<EMovementMode> MovementMode);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool IsTraversalBlocked();
    
};

