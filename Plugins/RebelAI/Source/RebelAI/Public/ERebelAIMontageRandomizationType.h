#pragma once
#include "CoreMinimal.h"
#include "ERebelAIMontageRandomizationType.generated.h"

UENUM(BlueprintType)
enum class ERebelAIMontageRandomizationType : uint8 {
    PureRandom,
    GlobalShuffleBag,
};

