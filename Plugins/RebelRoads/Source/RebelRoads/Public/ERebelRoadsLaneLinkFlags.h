#pragma once
#include "CoreMinimal.h"
#include "ERebelRoadsLaneLinkFlags.generated.h"

UENUM(BlueprintType)
enum class ERebelRoadsLaneLinkFlags : uint8 {
    None,
    OutgoingStart,
    OutgoingEnd,
    IncomingStart = 4,
    IncomingEnd = 8,
};

