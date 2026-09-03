#pragma once
#include "CoreMinimal.h"
#include "RebelAIActionFragment_GameplayEffect.h"
#include "DawnwalkerAIActionFragment_GameplayEffect.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDawnwalkerAIActionFragment_GameplayEffect : public FRebelAIActionFragment_GameplayEffect {
    GENERATED_BODY()
public:
    FDawnwalkerAIActionFragment_GameplayEffect();
};

