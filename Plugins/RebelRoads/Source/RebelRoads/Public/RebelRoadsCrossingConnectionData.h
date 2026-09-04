#pragma once
#include "CoreMinimal.h"
#include "RebelRoadsCrossingConnectionData.generated.h"

USTRUCT(BlueprintType)
struct FRebelRoadsCrossingConnectionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 SegmentIdx;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 LeftSegmentIdx;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ConvexEdgeStartIdx;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ConvexEdgeEndIdx;
    
    REBELROADS_API FRebelRoadsCrossingConnectionData();
};

