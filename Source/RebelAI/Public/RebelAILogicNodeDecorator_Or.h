#pragma once
#include "CoreMinimal.h"
#include "RebelAILogicNodeDecorator_LogicalOperator.h"
#include "RebelAILogicNodeDecorator_Or.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNodeDecorator_Or : public FRebelAILogicNodeDecorator_LogicalOperator {
    GENERATED_BODY()
public:
    FRebelAILogicNodeDecorator_Or();
};

