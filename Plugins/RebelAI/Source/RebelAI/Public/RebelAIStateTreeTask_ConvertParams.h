#pragma once
#include "CoreMinimal.h"
#include "RebelAIStateTreeTask.h"
#include "RebelAIStateTreeTask_ConvertParams.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIStateTreeTask_ConvertParams : public FRebelAIStateTreeTask {
    GENERATED_BODY()
public:
    FRebelAIStateTreeTask_ConvertParams();
};

