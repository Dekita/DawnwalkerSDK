#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RebelRoadsQuadTreeNode.generated.h"

USTRUCT(BlueprintType)
struct FRebelRoadsQuadTreeNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox2D Bounds;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint32> SegmentIndices;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint32> ChildrenIndices;
    
    REBELROADS_API FRebelRoadsQuadTreeNode();
};

