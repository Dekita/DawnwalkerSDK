#pragma once
#include "CoreMinimal.h"
#include "RebelAILogicNodeDecorator.h"
#include "RebelAILogicNodeDecorator_LogicalOperator.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNodeDecorator_LogicalOperator : public FRebelAILogicNodeDecorator {
    GENERATED_BODY()
public:
    FRebelAILogicNodeDecorator_LogicalOperator();
};

