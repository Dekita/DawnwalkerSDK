#pragma once
#include "CoreMinimal.h"
#include "RebelAIStateTreeCondition.h"
#include "RebelAIStateTreeCondition_CompareAIParamsType.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIStateTreeCondition_CompareAIParamsType : public FRebelAIStateTreeCondition {
    GENERATED_BODY()
public:
    FRebelAIStateTreeCondition_CompareAIParamsType();
};

