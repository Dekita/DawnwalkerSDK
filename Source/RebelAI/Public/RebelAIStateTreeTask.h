#pragma once
#include "CoreMinimal.h"
#include "StateTreeTaskBase.h"
#include "RebelAIStateTreeTask.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIStateTreeTask : public FStateTreeTaskBase {
    GENERATED_BODY()
public:
    FRebelAIStateTreeTask();
};

