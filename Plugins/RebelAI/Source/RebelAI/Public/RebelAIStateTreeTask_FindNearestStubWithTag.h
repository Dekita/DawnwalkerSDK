#pragma once
#include "CoreMinimal.h"
#include "RebelAIStateTreeTask.h"
#include "RebelAIStateTreeTask_FindNearestStubWithTag.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIStateTreeTask_FindNearestStubWithTag : public FRebelAIStateTreeTask {
    GENERATED_BODY()
public:
    FRebelAIStateTreeTask_FindNearestStubWithTag();
};

