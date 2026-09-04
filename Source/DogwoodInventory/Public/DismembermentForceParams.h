#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DismembermentForceParams.generated.h"

USTRUCT(BlueprintType)
struct FDismembermentForceParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LimbVelocityVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VelocityImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRelativeToLimb;
    
    DOGWOODINVENTORY_API FDismembermentForceParams();
};

