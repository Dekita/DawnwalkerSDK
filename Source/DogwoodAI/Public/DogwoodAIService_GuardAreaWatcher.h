#pragma once
#include "CoreMinimal.h"
#include "RebelAIService.h"
#include "DogwoodAIService_GuardAreaWatcher.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODAI_API FDogwoodAIService_GuardAreaWatcher : public FRebelAIService {
    GENERATED_BODY()
public:
    FDogwoodAIService_GuardAreaWatcher();
};

