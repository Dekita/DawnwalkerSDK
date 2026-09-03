#pragma once
#include "CoreMinimal.h"
#include "TrackingContour.h"
#include "FrameTrackingContourData.generated.h"

USTRUCT(BlueprintType)
struct METAHUMANCORE_API FFrameTrackingContourData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    FString Camera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TMap<FString, FTrackingContour> TrackingContours;
    
    FFrameTrackingContourData();
};

