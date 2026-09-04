#pragma once
#include "CoreMinimal.h"
#include "RebelAIActionFragmentInstanceData.h"
#include "RebelAIActionFragmentInstanceData_MoveTo.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIActionFragmentInstanceData_MoveTo : public FRebelAIActionFragmentInstanceData {
    GENERATED_BODY()
public:
    FRebelAIActionFragmentInstanceData_MoveTo();
};

