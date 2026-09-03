#pragma once
#include "CoreMinimal.h"
#include "RebelAIStateTreeTask_AIStub.h"
#include "RebelAIStateTreeTask_LogicTree.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIStateTreeTask_LogicTree : public FRebelAIStateTreeTask_AIStub {
    GENERATED_BODY()
public:
    FRebelAIStateTreeTask_LogicTree();
};

