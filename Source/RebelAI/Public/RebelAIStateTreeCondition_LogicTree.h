#pragma once
#include "CoreMinimal.h"
#include "RebelAIStateTreeCondition_AIStub.h"
#include "RebelAIStateTreeCondition_LogicTree.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIStateTreeCondition_LogicTree : public FRebelAIStateTreeCondition_AIStub {
    GENERATED_BODY()
public:
    FRebelAIStateTreeCondition_LogicTree();
};

