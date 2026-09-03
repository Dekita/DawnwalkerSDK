#pragma once
#include "CoreMinimal.h"
#include "ETraversalHelperType.generated.h"

UENUM(BlueprintType)
enum class ETraversalHelperType : uint8 {
    Wall,
    Roof,
    Ceiling,
    Platform,
};

