#pragma once
#include "CoreMinimal.h"
#include "ECinematicConditionType.generated.h"

UENUM(BlueprintType)
enum class ECinematicConditionType : uint8 {
    CinematicBegins,
    CinematicEnds,
    InCinematic,
    OutOfCinematic,
};

