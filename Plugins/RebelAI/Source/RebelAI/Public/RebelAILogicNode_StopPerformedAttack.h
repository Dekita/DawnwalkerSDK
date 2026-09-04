#pragma once
#include "CoreMinimal.h"
#include "RebelAILogicNode.h"
#include "RebelAILogicNode_StopPerformedAttack.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNode_StopPerformedAttack : public FRebelAILogicNode {
    GENERATED_BODY()
public:
    FRebelAILogicNode_StopPerformedAttack();
};

