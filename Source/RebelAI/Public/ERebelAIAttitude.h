#pragma once
#include "CoreMinimal.h"
#include "ERebelAIAttitude.generated.h"

UENUM(BlueprintType)
enum class ERebelAIAttitude : uint8 {
    NotSet,
    Friendly,
    Neutral,
    Hostile,
};

