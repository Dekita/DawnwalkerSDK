#pragma once
#include "CoreMinimal.h"
#include "DawnwalkerFootTraceData.h"
#include "DawnwalkerTraversalSettings.generated.h"

USTRUCT(BlueprintType)
struct FDawnwalkerTraversalSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDawnwalkerFootTraceData> FootTraceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlidingDownAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlidingDownDeceleration;
    
    DAWNWALKER_API FDawnwalkerTraversalSettings();
};

