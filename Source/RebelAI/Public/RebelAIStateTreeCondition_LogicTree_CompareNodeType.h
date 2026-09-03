#pragma once
#include "CoreMinimal.h"
#include "RebelAIStateTreeCondition_LogicTree.h"
#include "RebelAIStateTreeCondition_LogicTree_CompareNodeType.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIStateTreeCondition_LogicTree_CompareNodeType : public FRebelAIStateTreeCondition_LogicTree {
    GENERATED_BODY()
public:
    FRebelAIStateTreeCondition_LogicTree_CompareNodeType();
};

