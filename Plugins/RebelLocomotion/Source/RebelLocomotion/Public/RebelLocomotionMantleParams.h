#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RebelLocomotionMantleParams.generated.h"

class UAnimMontage;
class UCurveVector;

USTRUCT(BlueprintType)
struct FRebelLocomotionMantleParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* AnimMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* PositionCorrectionCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartingPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StartingOffset;
    
    REBELLOCOMOTION_API FRebelLocomotionMantleParams();
};

