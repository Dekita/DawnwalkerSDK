#pragma once
#include "CoreMinimal.h"
#include "RebelAIStateTreeTask_Math.h"
#include "RebelAIStateTreeTask_AppendTagsRef.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIStateTreeTask_AppendTagsRef : public FRebelAIStateTreeTask_Math {
    GENERATED_BODY()
public:
    FRebelAIStateTreeTask_AppendTagsRef();
};

