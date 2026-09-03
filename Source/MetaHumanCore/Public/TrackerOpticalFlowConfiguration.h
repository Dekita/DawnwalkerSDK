#pragma once
#include "CoreMinimal.h"
#include "TrackerOpticalFlowConfiguration.generated.h"

USTRUCT(BlueprintType)
struct METAHUMANCORE_API FTrackerOpticalFlowConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseOpticalFlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseConfidence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseForwardFlow;
    
    FTrackerOpticalFlowConfiguration();
};

