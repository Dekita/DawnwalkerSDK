#pragma once
#include "CoreMinimal.h"
#include "ESynchronizationPositionOrientation.generated.h"

UENUM(BlueprintType)
enum class ESynchronizationPositionOrientation : uint8 {
    None,
    Front,
    Back,
    Left,
    Right,
};

