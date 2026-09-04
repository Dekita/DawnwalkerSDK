#pragma once
#include "CoreMinimal.h"
#include "RebelAILogicNode_Filter.h"
#include "RebelAILogicNode_Filter_IsLeader.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNode_Filter_IsLeader : public FRebelAILogicNode_Filter {
    GENERATED_BODY()
public:
    FRebelAILogicNode_Filter_IsLeader();
};

