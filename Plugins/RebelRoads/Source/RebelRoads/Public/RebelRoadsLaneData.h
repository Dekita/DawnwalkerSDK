#pragma once
#include "CoreMinimal.h"
#include "RebelRoadsLaneData.generated.h"

USTRUCT(BlueprintType)
struct REBELROADS_API FRebelRoadsLaneData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 SegmentIdx;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 LaneProfileIdx;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 LaneIndices[2];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 LeftBoundaryIndices[2];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 RightBoundaryIndices[2];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 WaitPointIndices[2];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 LaneLinksStartIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 LaneLinksNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Flags;
    
    FRebelRoadsLaneData();
};

