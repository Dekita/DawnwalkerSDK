#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FrameTrackingContourData.h"
#include "ReducedContour.h"
#include "MetaHumanContourData.generated.h"

UCLASS(Blueprintable)
class METAHUMANCORE_API UMetaHumanContourData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameTrackingContourData FrameTrackingContourData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FReducedContour> ReducedContourData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FString> ManuallyModifiedCurves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ContourDataConfigVersion;
    
    UMetaHumanContourData();

};

