#pragma once
#include "CoreMinimal.h"
#include "RebelAILogicNodeDecorator_LogicalOperator.h"
#include "RebelAILogicNodeDecorator_And.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNodeDecorator_And : public FRebelAILogicNodeDecorator_LogicalOperator {
    GENERATED_BODY()
public:
    FRebelAILogicNodeDecorator_And();
};

