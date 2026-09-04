#pragma once
#include "CoreMinimal.h"
#include "RebelAILogicNode.h"
#include "RebelAILogicNode_FinalizedInclude.generated.h"

class URebelGenericTree;

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNode_FinalizedInclude : public FRebelAILogicNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelGenericTree* Tree;
    
    FRebelAILogicNode_FinalizedInclude();
};

