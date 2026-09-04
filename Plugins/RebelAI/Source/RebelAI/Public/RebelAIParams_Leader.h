#pragma once
#include "CoreMinimal.h"
#include "RebelAIParams.h"
#include "RebelAIParams_Leader.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIParams_Leader : public FRebelAIParams {
    GENERATED_BODY()
public:
    FRebelAIParams_Leader();
};

