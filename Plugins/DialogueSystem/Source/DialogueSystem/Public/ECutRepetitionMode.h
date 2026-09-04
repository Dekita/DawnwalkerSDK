#pragma once
#include "CoreMinimal.h"
#include "ECutRepetitionMode.generated.h"

UENUM(BlueprintType)
enum class ECutRepetitionMode : uint8 {
    PingPong,
    Loop,
    Stay,
    NoRepetition,
};

