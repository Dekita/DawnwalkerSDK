#pragma once
#include "CoreMinimal.h"
#include "StateTreeConditionBase.h"
#include "RebelAIStateTreeCondition.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIStateTreeCondition : public FStateTreeConditionCommonBase {
    GENERATED_BODY()
public:
    FRebelAIStateTreeCondition();
};

