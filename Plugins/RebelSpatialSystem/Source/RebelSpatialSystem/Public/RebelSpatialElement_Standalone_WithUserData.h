#pragma once
#include "CoreMinimal.h"
#include "RebelSpatialElement_Standalone.h"
#include "RebelSpatialElement_Standalone_WithUserData.generated.h"

USTRUCT(BlueprintType)
struct REBELSPATIALSYSTEM_API FRebelSpatialElement_Standalone_WithUserData : public FRebelSpatialElement_Standalone {
    GENERATED_BODY()
public:
    FRebelSpatialElement_Standalone_WithUserData();
};

