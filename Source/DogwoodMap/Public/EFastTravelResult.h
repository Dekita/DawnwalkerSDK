#pragma once
#include "CoreMinimal.h"
#include "EFastTravelResult.generated.h"

UENUM(BlueprintType)
enum class EFastTravelResult : uint8 {
    Failure,
    MissingMapPin,
    FastTravel,
};

