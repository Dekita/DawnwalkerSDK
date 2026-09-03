#pragma once
#include "CoreMinimal.h"
#include "RebelAIReactionCondition.h"
#include "DawnwalkerTransport_ReactionCondition_CanTransportStopCombat.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDawnwalkerTransport_ReactionCondition_CanTransportStopCombat : public FRebelAIReactionCondition {
    GENERATED_BODY()
public:
    FDawnwalkerTransport_ReactionCondition_CanTransportStopCombat();
};

