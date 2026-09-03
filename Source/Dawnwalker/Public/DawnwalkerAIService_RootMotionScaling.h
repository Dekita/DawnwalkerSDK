#pragma once
#include "CoreMinimal.h"
#include "DogwoodAIService_RootMotionScaling.h"
#include "DawnwalkerAIService_RootMotionScaling.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDawnwalkerAIService_RootMotionScaling : public FDogwoodAIService_RootMotionScaling {
    GENERATED_BODY()
public:
    FDawnwalkerAIService_RootMotionScaling();
};

