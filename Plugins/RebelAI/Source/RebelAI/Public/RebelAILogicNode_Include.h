#pragma once
#include "CoreMinimal.h"
#include "RebelAILogicNode.h"
#include "RebelAILogicNode_Include_Data.h"
#include "RebelAILogicNode_Include.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNode_Include : public FRebelAILogicNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelAILogicNode_Include_Data IncludeTree;
    
    FRebelAILogicNode_Include();
};

