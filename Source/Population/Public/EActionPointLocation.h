#pragma once
#include "CoreMinimal.h"
#include "EActionPointLocation.generated.h"

UENUM(BlueprintType)
enum class EActionPointLocation : uint8 {
    NotChecked,
    UnderRoof,
    Outside,
};

