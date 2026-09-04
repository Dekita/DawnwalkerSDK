#pragma once
#include "CoreMinimal.h"
#include "EGameVersion.generated.h"

UENUM(BlueprintType)
enum class EGameVersion : uint8 {
    Invalid,
    InitialDevelopment,
    GoldMaster,
    Patch1,
    Patch2,
    Patch2Hotfix1,
    Current = Patch2Hotfix1,
};

