#pragma once
#include "CoreMinimal.h"
#include "RebelAILogicNode.h"
#include "RebelAILogicNode_Virtual.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNode_Virtual : public FRebelAILogicNode {
    GENERATED_BODY()
public:
    FRebelAILogicNode_Virtual();
};

