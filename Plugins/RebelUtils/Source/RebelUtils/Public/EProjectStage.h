#pragma once
#include "CoreMinimal.h"
#include "EProjectStage.generated.h"

UENUM(BlueprintType)
enum class EProjectStage : uint8 {
    Invalid,
    InitialDevelopment,
    GoldMaster,
    Patch1,
    Patch2,
    Current = Patch2,
};

