#pragma once
#include "CoreMinimal.h"
#include "RebelAIActionFragmentInstanceData.h"
#include "RebelAIActionFragmentInstanceData_GameplayEffect.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIActionFragmentInstanceData_GameplayEffect : public FRebelAIActionFragmentInstanceData {
    GENERATED_BODY()
public:
    FRebelAIActionFragmentInstanceData_GameplayEffect();
};

