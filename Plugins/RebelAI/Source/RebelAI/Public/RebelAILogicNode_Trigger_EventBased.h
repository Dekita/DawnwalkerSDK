#pragma once
#include "CoreMinimal.h"
#include "RebelAILogicNode_Trigger.h"
#include "RebelAILogicNode_Trigger_EventBased.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNode_Trigger_EventBased : public FRebelAILogicNode_Trigger {
    GENERATED_BODY()
public:
    FRebelAILogicNode_Trigger_EventBased();
};

