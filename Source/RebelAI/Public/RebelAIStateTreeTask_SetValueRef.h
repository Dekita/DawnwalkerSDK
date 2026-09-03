#pragma once
#include "CoreMinimal.h"
#include "RebelAIStateTreeTask_Math.h"
#include "RebelAIStateTreeTask_SetValueRef.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIStateTreeTask_SetValueRef : public FRebelAIStateTreeTask_Math {
    GENERATED_BODY()
public:
    FRebelAIStateTreeTask_SetValueRef();
};

