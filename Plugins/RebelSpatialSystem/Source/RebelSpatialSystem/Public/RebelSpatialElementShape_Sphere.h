#pragma once
#include "CoreMinimal.h"
#include "RebelSpatialElementShape.h"
#include "RebelSpatialElementShape_Sphere.generated.h"

USTRUCT(BlueprintType)
struct REBELSPATIALSYSTEM_API FRebelSpatialElementShape_Sphere : public FRebelSpatialElementShape {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    FRebelSpatialElementShape_Sphere();
};

