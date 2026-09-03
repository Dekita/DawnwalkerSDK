#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BiomesRandomScale.generated.h"

USTRUCT(BlueprintType)
struct ERRANTBIOMESRUNTIME_API FBiomesRandomScale {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector3f min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector3f max;
    
    FBiomesRandomScale();
};

