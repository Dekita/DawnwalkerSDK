#pragma once
#include "CoreMinimal.h"
#include "RebelAILogicNode_Virtual.h"
#include "RebelAILogicNode_Virtual_ExecutionContext.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNode_Virtual_ExecutionContext : public FRebelAILogicNode_Virtual {
    GENERATED_BODY()
public:
    FRebelAILogicNode_Virtual_ExecutionContext();
};

