#pragma once
#include "CoreMinimal.h"
#include "RebelSpatialElementShape.h"
#include "RebelSpatialElementShape_Point.generated.h"

USTRUCT(BlueprintType)
struct REBELSPATIALSYSTEM_API FRebelSpatialElementShape_Point : public FRebelSpatialElementShape {
    GENERATED_BODY()
public:
    FRebelSpatialElementShape_Point();
};

