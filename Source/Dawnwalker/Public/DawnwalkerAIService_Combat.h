#pragma once
#include "CoreMinimal.h"
#include "DogwoodAIService_Combat.h"
#include "DawnwalkerAIService_Combat.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDawnwalkerAIService_Combat : public FDogwoodAIService_Combat {
    GENERATED_BODY()
public:
    FDawnwalkerAIService_Combat();
};

