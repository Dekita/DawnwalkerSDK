#pragma once
#include "CoreMinimal.h"
#include "ETraitUnblockType.generated.h"

UENUM(BlueprintType)
enum class ETraitUnblockType : uint8 {
    AddLevels,
    SetLevel,
    ToMaxLevel,
    Max,
};

