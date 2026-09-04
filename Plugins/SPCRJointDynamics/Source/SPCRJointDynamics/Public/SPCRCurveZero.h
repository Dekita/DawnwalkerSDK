#pragma once
#include "CoreMinimal.h"
#include "SPCRCurveZero.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct SPCRJOINTDYNAMICS_API FSPCRCurveZero {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* Curve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Power;
    
    FSPCRCurveZero();
};

