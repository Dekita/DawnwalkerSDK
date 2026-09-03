#pragma once
#include "CoreMinimal.h"
#include "HoudiniInputSceneComponent.h"
#include "HoudiniLandscapeSplineControlPointData.h"
#include "HoudiniLandscapeSplineSegmentData.h"
#include "HoudiniInputLandscapeSplinesComponent.generated.h"

class ULandscapeSplineControlPoint;

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniInputLandscapeSplinesComponent : public UHoudiniInputSceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHoudiniLandscapeSplineControlPointData> CachedControlPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHoudiniLandscapeSplineSegmentData> CachedSegments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<ULandscapeSplineControlPoint>, int32> ControlPointIdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NextControlPointId;
    
public:
    UHoudiniInputLandscapeSplinesComponent();

};

