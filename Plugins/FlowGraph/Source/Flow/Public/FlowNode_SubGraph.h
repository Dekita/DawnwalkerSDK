#pragma once
#include "CoreMinimal.h"
#include "FlowNode.h"
#include "FlowNode_SubGraph.generated.h"

class UFlowAsset;

UCLASS(Blueprintable)
class FLOW_API UFlowNode_SubGraph : public UFlowNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFlowAsset> Asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanInstanceIdenticalAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString SavedAssetInstanceName;
    
public:
    UFlowNode_SubGraph();

};

