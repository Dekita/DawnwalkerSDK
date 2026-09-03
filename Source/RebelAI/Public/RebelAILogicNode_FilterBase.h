#pragma once
#include "CoreMinimal.h"
#include "RebelAILogicNode.h"
#include "RebelAILogicNode_FilterBase.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNode_FilterBase : public FRebelAILogicNode {
    GENERATED_BODY()
public:
    FRebelAILogicNode_FilterBase();
};

