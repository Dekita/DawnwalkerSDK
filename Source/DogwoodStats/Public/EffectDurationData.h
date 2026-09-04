#pragma once
#include "CoreMinimal.h"
#include "EEffectDurationType.h"
#include "EffectDurationData.generated.h"

USTRUCT(BlueprintType)
struct FEffectDurationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEffectDurationType DurationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RealTimeSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TimeSegments;
    
    DOGWOODSTATS_API FEffectDurationData();
};

