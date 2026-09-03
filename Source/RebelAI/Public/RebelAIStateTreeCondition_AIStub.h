#pragma once
#include "CoreMinimal.h"
#include "RebelAIStateTreeCondition.h"
#include "RebelAIStateTreeCondition_AIStub.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIStateTreeCondition_AIStub : public FRebelAIStateTreeCondition {
    GENERATED_BODY()
public:
    FRebelAIStateTreeCondition_AIStub();
};

