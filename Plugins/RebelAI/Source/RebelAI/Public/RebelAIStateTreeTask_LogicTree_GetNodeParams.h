#pragma once
#include "CoreMinimal.h"
#include "RebelAIStateTreeTask_LogicTree.h"
#include "RebelAIStateTreeTask_LogicTree_GetNodeParams.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIStateTreeTask_LogicTree_GetNodeParams : public FRebelAIStateTreeTask_LogicTree {
    GENERATED_BODY()
public:
    FRebelAIStateTreeTask_LogicTree_GetNodeParams();
};

