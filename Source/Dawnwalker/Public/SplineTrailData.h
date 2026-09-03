#pragma once
#include "CoreMinimal.h"
#include "SplineTrailData.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FSplineTrailData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SplineTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomYawRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DecalPresetIndex;
    
    FSplineTrailData();
};

