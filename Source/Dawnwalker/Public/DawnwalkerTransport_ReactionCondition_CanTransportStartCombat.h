#pragma once
#include "CoreMinimal.h"
#include "RebelAIReactionCondition.h"
#include "DawnwalkerTransport_ReactionCondition_CanTransportStartCombat.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDawnwalkerTransport_ReactionCondition_CanTransportStartCombat : public FRebelAIReactionCondition {
    GENERATED_BODY()
public:
    FDawnwalkerTransport_ReactionCondition_CanTransportStartCombat();
};

