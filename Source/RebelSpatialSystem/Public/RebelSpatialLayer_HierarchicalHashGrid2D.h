#pragma once
#include "CoreMinimal.h"
#include "RebelSpatialLayer.h"
#include "RebelSpatialLayer_HierarchicalHashGrid2D.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class REBELSPATIALSYSTEM_API URebelSpatialLayer_HierarchicalHashGrid2D : public URebelSpatialLayer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CellSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LevelRatio;
    
public:
    URebelSpatialLayer_HierarchicalHashGrid2D();

};

