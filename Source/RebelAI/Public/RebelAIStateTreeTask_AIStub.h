#pragma once
#include "CoreMinimal.h"
#include "RebelAIStateTreeTask.h"
#include "RebelAIStateTreeTask_AIStub.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIStateTreeTask_AIStub : public FRebelAIStateTreeTask {
    GENERATED_BODY()
public:
    FRebelAIStateTreeTask_AIStub();
};

