#pragma once
#include "CoreMinimal.h"
#include "RebelAILogicNode_Task.h"
#include "RebelAILogicNode_Task_PerformBestNodeFromPreferredRangeNodes.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNode_Task_PerformBestNodeFromPreferredRangeNodes : public FRebelAILogicNode_Task {
    GENERATED_BODY()
public:
    FRebelAILogicNode_Task_PerformBestNodeFromPreferredRangeNodes();
};

