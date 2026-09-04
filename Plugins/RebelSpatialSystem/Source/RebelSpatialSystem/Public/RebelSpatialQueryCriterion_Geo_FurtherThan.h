#pragma once
#include "CoreMinimal.h"
#include "RebelSpatialQueryCriterion.h"
#include "RebelSpatialQueryCriterion_Geo_FurtherThan.generated.h"

USTRUCT(BlueprintType)
struct REBELSPATIALSYSTEM_API FRebelSpatialQueryCriterion_Geo_FurtherThan : public FRebelSpatialQueryCriterion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    FRebelSpatialQueryCriterion_Geo_FurtherThan();
};

