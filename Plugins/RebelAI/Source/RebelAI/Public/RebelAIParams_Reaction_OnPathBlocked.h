#pragma once
#include "CoreMinimal.h"
#include "RebelAIParams_Reaction.h"
#include "RebelAIParams_Reaction_OnPathBlocked.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIParams_Reaction_OnPathBlocked : public FRebelAIParams_Reaction {
    GENERATED_BODY()
public:
    FRebelAIParams_Reaction_OnPathBlocked();
};

