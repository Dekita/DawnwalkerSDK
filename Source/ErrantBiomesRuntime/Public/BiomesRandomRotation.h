#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BiomesRandomRotation.generated.h"

USTRUCT(BlueprintType)
struct ERRANTBIOMESRUNTIME_API FBiomesRandomRotation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector3f min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector3f max;
    
    FBiomesRandomRotation();
};

