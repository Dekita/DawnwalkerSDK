#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DismembermentForceParams.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODINVENTORY_API FDismembermentForceParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LimbVelocityVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VelocityImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRelativeToLimb;
    
    FDismembermentForceParams();
};

