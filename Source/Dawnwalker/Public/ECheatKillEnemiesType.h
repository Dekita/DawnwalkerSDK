#pragma once
#include "CoreMinimal.h"
#include "ECheatKillEnemiesType.generated.h"

UENUM(BlueprintType)
enum class ECheatKillEnemiesType : uint8 {
    Locked,
    Mortal,
    All,
};

