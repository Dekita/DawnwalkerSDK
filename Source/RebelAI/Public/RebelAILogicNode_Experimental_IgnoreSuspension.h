#pragma once
#include "CoreMinimal.h"
#include "RebelAILogicNode.h"
#include "RebelAILogicNode_Experimental_IgnoreSuspension.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNode_Experimental_IgnoreSuspension : public FRebelAILogicNode {
    GENERATED_BODY()
public:
    FRebelAILogicNode_Experimental_IgnoreSuspension();
};

