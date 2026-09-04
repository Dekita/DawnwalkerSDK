#pragma once
#include "CoreMinimal.h"
#include "RebelAIService.h"
#include "RebelAIService_Combat.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIService_Combat : public FRebelAIService {
    GENERATED_BODY()
public:
    FRebelAIService_Combat();
};

