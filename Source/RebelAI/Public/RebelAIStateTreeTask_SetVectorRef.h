#pragma once
#include "CoreMinimal.h"
#include "RebelAIStateTreeTask_Math.h"
#include "RebelAIStateTreeTask_SetVectorRef.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIStateTreeTask_SetVectorRef : public FRebelAIStateTreeTask_Math {
    GENERATED_BODY()
public:
    FRebelAIStateTreeTask_SetVectorRef();
};

