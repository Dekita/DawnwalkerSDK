#pragma once
#include "CoreMinimal.h"
#include "RebelAIService_Combat.h"
#include "DogwoodAIService_Combat.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODAI_API FDogwoodAIService_Combat : public FRebelAIService_Combat {
    GENERATED_BODY()
public:
    FDogwoodAIService_Combat();
};

