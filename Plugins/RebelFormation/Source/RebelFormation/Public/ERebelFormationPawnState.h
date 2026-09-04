#pragma once
#include "CoreMinimal.h"
#include "ERebelFormationPawnState.generated.h"

UENUM(BlueprintType)
enum class ERebelFormationPawnState : uint8 {
    NotExisting,
    Spawning,
    Active,
    Fighting,
    Dead,
    Disabled,
};

