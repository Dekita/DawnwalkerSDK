#pragma once
#include "CoreMinimal.h"
#include "RebelAILogicNode_Trigger_EventBased.h"
#include "RebelAILogicNode_Trigger_StartedVats.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNode_Trigger_StartedVats : public FRebelAILogicNode_Trigger_EventBased {
    GENERATED_BODY()
public:
    FRebelAILogicNode_Trigger_StartedVats();
};

