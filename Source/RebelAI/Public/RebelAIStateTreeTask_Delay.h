#pragma once
#include "CoreMinimal.h"
#include "RebelAIStateTreeTask.h"
#include "RebelAIStateTreeTask_Delay.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIStateTreeTask_Delay : public FRebelAIStateTreeTask {
    GENERATED_BODY()
public:
    FRebelAIStateTreeTask_Delay();
};

