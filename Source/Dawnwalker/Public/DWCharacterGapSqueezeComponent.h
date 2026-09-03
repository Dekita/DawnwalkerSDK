#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EGapSqueezeMovementState.h"
#include "GapSqueezeEndedSignatureDelegate.h"
#include "GapSqueezeStartedSignatureDelegate.h"
#include "Templates/SubclassOf.h"
#include "DWCharacterGapSqueezeComponent.generated.h"

class UAnimInstance;
class UAnimMontage;
class USplineComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DAWNWALKER_API UDWCharacterGapSqueezeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGapSqueezeStartedSignature OnGapSqueezeStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGapSqueezeEndedSignature OnGapSqueezeEnded;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndPositionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrontExitDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BackwardExitDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputAngleTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LerpInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* SqueezeLeaveBackwardsMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* SqueezeLeaveForwardMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* SqueezeLeaveBackwardsMontageLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* SqueezeLeaveForwardMontageLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> SqueezeAnimLayer;
    
public:
    UDWCharacterGapSqueezeComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartSqueeze();
    
    UFUNCTION(BlueprintCallable)
    bool ShouldEnterGap(float EnterRotation);
    
    UFUNCTION(BlueprintCallable)
    void LeaveSqueezeEntry();
    
    UFUNCTION(BlueprintCallable)
    void LeaveSqueeze(bool bIsLeavingBackwards, float InExitDistance);
    
    UFUNCTION(BlueprintCallable)
    EGapSqueezeMovementState GetSqueezeMovementState();
    
    UFUNCTION(BlueprintCallable)
    void CheckSqueezeEntry(USplineComponent* SplineComponent, bool bFaceToLeft, bool bIsEdge);
    
};

