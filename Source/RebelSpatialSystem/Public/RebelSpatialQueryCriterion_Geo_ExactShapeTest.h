#pragma once
#include "CoreMinimal.h"
#include "RebelSpatialQueryCriterion.h"
#include "RebelSpatialQueryCriterion_Geo_ExactShapeTest.generated.h"

USTRUCT(BlueprintType)
struct REBELSPATIALSYSTEM_API FRebelSpatialQueryCriterion_Geo_ExactShapeTest : public FRebelSpatialQueryCriterion {
    GENERATED_BODY()
public:
    FRebelSpatialQueryCriterion_Geo_ExactShapeTest();
};

