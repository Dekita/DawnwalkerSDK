#pragma once
#include "CoreMinimal.h"
#include "RebelSpatialLayer.h"
#include "RebelSpatialLayer_Octree.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class REBELSPATIALSYSTEM_API URebelSpatialLayer_Octree : public URebelSpatialLayer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CellSize;
    
public:
    URebelSpatialLayer_Octree();

};

