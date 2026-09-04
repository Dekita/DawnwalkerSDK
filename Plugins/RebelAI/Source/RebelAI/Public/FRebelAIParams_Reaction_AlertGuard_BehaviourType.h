#pragma once
#include "CoreMinimal.h"
#include "FRebelAIParams_Reaction_AlertGuard_BehaviourType.generated.h"

UENUM(BlueprintType)
enum class FRebelAIParams_Reaction_AlertGuard_BehaviourType : uint8 {
    AlertNearest,
    AlertRandom,
    AlertFarthest,
};

