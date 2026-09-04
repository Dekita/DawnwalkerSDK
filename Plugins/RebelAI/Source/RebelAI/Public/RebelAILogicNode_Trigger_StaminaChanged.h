#pragma once
#include "CoreMinimal.h"
#include "RebelAILogicNode_Trigger_EventBased.h"
#include "RebelAILogicNode_Trigger_StaminaChanged.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNode_Trigger_StaminaChanged : public FRebelAILogicNode_Trigger_EventBased {
    GENERATED_BODY()
public:
    FRebelAILogicNode_Trigger_StaminaChanged();
};

