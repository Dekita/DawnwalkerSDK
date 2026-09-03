#pragma once
#include "CoreMinimal.h"
#include "RebelAIService.h"
#include "DogwoodAIService_MotionWarpingTarget.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODAI_API FDogwoodAIService_MotionWarpingTarget : public FRebelAIService {
    GENERATED_BODY()
public:
    FDogwoodAIService_MotionWarpingTarget();
};

