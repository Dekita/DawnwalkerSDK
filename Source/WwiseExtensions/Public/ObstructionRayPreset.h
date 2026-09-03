#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ObstructionRayPreset.generated.h"

USTRUCT(BlueprintType)
struct WWISEEXTENSIONS_API FObstructionRayPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RayOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    FObstructionRayPreset();
};

