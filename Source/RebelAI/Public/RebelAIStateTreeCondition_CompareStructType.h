#pragma once
#include "CoreMinimal.h"
#include "RebelAIStateTreeCondition.h"
#include "RebelAIStateTreeCondition_CompareStructType.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIStateTreeCondition_CompareStructType : public FRebelAIStateTreeCondition {
    GENERATED_BODY()
public:
    FRebelAIStateTreeCondition_CompareStructType();
};

