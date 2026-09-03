#pragma once
#include "CoreMinimal.h"
#include "RebelAIReactionCondition.h"
#include "DawnwalkerAIReactionCondition_IsCombatModeActive.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDawnwalkerAIReactionCondition_IsCombatModeActive : public FRebelAIReactionCondition {
    GENERATED_BODY()
public:
    FDawnwalkerAIReactionCondition_IsCombatModeActive();
};

