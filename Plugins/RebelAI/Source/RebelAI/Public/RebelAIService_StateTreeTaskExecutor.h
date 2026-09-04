#pragma once
#include "CoreMinimal.h"
#include "RebelAIService_StateTree.h"
#include "RebelAIService_StateTreeTaskExecutor.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIService_StateTreeTaskExecutor : public FRebelAIService_StateTree {
    GENERATED_BODY()
public:
    FRebelAIService_StateTreeTaskExecutor();
};

