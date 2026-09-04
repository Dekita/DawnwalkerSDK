#pragma once
#include "CoreMinimal.h"
#include "SPCRCurve.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct SPCRJOINTDYNAMICS_API FSPCRCurve {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* Curve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Power;
    
    FSPCRCurve();
};

