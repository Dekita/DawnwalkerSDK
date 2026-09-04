#pragma once
#include "CoreMinimal.h"
#include "RebelAIStateTreeTask_ConvertParams.h"
#include "RebelAIStateTreeTask_ConvertAIParams.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIStateTreeTask_ConvertAIParams : public FRebelAIStateTreeTask_ConvertParams {
    GENERATED_BODY()
public:
    FRebelAIStateTreeTask_ConvertAIParams();
};

