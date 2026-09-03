#pragma once
#include "CoreMinimal.h"
#include "RebelAILogicNode.h"
#include "RebelAINodeReference.h"
#include "RebelAILogicNode_Subtree.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNode_Subtree : public FRebelAILogicNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelAINodeReference NodeReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Alias;
    
    FRebelAILogicNode_Subtree();
};

