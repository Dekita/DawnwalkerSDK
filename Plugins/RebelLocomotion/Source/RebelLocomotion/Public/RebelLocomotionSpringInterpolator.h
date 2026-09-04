#pragma once
#include "CoreMinimal.h"
#include "RebelLocomotionSpringInterpolator.generated.h"

USTRUCT(BlueprintType)
struct FRebelLocomotionSpringInterpolator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Stiffness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DampingRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Mass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetVelocityAmount;
    
    REBELLOCOMOTION_API FRebelLocomotionSpringInterpolator();
};

