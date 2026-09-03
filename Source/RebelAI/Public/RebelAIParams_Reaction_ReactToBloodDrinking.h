#pragma once
#include "CoreMinimal.h"
#include "RebelAIParams_Reaction.h"
#include "RebelAIParams_Reaction_ReactToBloodDrinking.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIParams_Reaction_ReactToBloodDrinking : public FRebelAIParams_Reaction {
    GENERATED_BODY()
public:
    FRebelAIParams_Reaction_ReactToBloodDrinking();
};

