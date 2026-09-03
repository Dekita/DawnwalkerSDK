#pragma once
#include "CoreMinimal.h"
#include "RebelRoadsQuadTreeNode.h"
#include "RebelRoadsQuadTreeSegmentInfo.h"
#include "RebelRoadsQuadTree.generated.h"

USTRUCT(BlueprintType)
struct REBELROADS_API FRebelRoadsQuadTree {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Capacity;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 MaxDepth;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 RootIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebelRoadsQuadTreeNode> Nodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebelRoadsQuadTreeSegmentInfo> Infos;
    
    FRebelRoadsQuadTree();
};

