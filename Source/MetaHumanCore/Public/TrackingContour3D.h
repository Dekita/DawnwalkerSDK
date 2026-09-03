#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TrackingContour3D.generated.h"

USTRUCT(BlueprintType)
struct METAHUMANCORE_API FTrackingContour3D {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector3d> DensePoints;
    
    FTrackingContour3D();
};

