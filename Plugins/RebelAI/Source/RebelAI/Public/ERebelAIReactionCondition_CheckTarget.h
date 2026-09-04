#pragma once
#include "CoreMinimal.h"
#include "ERebelAIReactionCondition_CheckTarget.generated.h"

UENUM(BlueprintType)
enum class ERebelAIReactionCondition_CheckTarget : uint8 {
    Owner,
    Instigator,
    AbilityTarget,
    Player,
};

