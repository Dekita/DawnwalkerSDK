#pragma once
#include "CoreMinimal.h"
#include "ECourtTileType.generated.h"

UENUM(BlueprintType)
enum class ECourtTileType : uint8 {
    None,
    Boss,
    MiniBoss,
    Activity,
};

