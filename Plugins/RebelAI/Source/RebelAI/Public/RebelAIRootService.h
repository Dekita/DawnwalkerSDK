#pragma once
#include "CoreMinimal.h"
#include "RebelAIService.h"
#include "RebelAIRootService.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIRootService : public FRebelAIService {
    GENERATED_BODY()
public:
    FRebelAIRootService();
};

