#pragma once
#include "CoreMinimal.h"
#include "RebelAIStateTreeTask.h"
#include "RebelAIStateTreeTask_GenerateRandomPointInsideArea.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIStateTreeTask_GenerateRandomPointInsideArea : public FRebelAIStateTreeTask {
    GENERATED_BODY()
public:
    FRebelAIStateTreeTask_GenerateRandomPointInsideArea();
};

