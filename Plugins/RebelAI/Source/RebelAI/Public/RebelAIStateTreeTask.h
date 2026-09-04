#pragma once
#include "CoreMinimal.h"
#include "StateTreeTaskBase.h"
#include "RebelAIStateTreeTask.generated.h"

USTRUCT(BlueprintType)
struct FRebelAIStateTreeTask : public FStateTreeTaskBase {
    GENERATED_BODY()
public:
    REBELAI_API FRebelAIStateTreeTask();
};

