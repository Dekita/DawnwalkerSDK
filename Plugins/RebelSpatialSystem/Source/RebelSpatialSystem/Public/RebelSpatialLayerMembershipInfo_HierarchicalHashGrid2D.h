#pragma once
#include "CoreMinimal.h"
#include "RebelSpatialLayerMembershipInfo.h"
#include "RebelSpatialLayerMembershipInfo_HierarchicalHashGrid2D.generated.h"

USTRUCT(BlueprintType)
struct FRebelSpatialLayerMembershipInfo_HierarchicalHashGrid2D : public FRebelSpatialLayerMembershipInfo {
    GENERATED_BODY()
public:
    REBELSPATIALSYSTEM_API FRebelSpatialLayerMembershipInfo_HierarchicalHashGrid2D();
};

