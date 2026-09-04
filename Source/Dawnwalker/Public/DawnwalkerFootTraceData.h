#pragma once
#include "CoreMinimal.h"
#include "DawnwalkerBoneTraceData.h"
#include "DawnwalkerFootTraceData.generated.h"

USTRUCT(BlueprintType)
struct FDawnwalkerFootTraceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RequireAllTraceHits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDawnwalkerBoneTraceData HeelTrace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDawnwalkerBoneTraceData ToesTrace;
    
    DAWNWALKER_API FDawnwalkerFootTraceData();
};

