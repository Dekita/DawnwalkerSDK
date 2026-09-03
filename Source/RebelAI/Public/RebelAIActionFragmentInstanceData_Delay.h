#pragma once
#include "CoreMinimal.h"
#include "RebelAIActionFragmentInstanceData.h"
#include "RebelAIActionFragmentInstanceData_Delay.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIActionFragmentInstanceData_Delay : public FRebelAIActionFragmentInstanceData {
    GENERATED_BODY()
public:
    FRebelAIActionFragmentInstanceData_Delay();
};

