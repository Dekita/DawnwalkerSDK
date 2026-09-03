#pragma once
#include "CoreMinimal.h"
#include "RebelSpatialQueryCriterion.h"
#include "RebelSpatialQueryCriterion_Geo_InsideArcAngle.generated.h"

USTRUCT(BlueprintType)
struct REBELSPATIALSYSTEM_API FRebelSpatialQueryCriterion_Geo_InsideArcAngle : public FRebelSpatialQueryCriterion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CentralAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArcAngleSpan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExactShapeTest;
    
    FRebelSpatialQueryCriterion_Geo_InsideArcAngle();
};

