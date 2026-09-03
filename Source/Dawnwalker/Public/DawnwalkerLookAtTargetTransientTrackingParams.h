#pragma once
#include "CoreMinimal.h"
#include "DawnwalkerLookAtTargetTransientTrackingParams.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDawnwalkerLookAtTargetTransientTrackingParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetNotInFOVTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetInFOVTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookAtConeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetNotInConeTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetInConeTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ObserverMaxSpeed;
    
    FDawnwalkerLookAtTargetTransientTrackingParams();
};

