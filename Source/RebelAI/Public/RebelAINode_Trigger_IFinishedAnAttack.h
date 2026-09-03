#pragma once
#include "CoreMinimal.h"
#include "RebelAILogicNode_Trigger_EventBased.h"
#include "RebelAINode_Trigger_IFinishedAnAttack.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAINode_Trigger_IFinishedAnAttack : public FRebelAILogicNode_Trigger_EventBased {
    GENERATED_BODY()
public:
    FRebelAINode_Trigger_IFinishedAnAttack();
};

