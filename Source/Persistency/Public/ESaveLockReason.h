#pragma once
#include "CoreMinimal.h"
#include "ESaveLockReason.generated.h"

UENUM(BlueprintType)
enum ESaveLockReason {
    NoReason,
    NoWorld,
    AwaitedSavables,
    NoSavables,
    NoIdleSaveGameStage,
    TakingScreenshot,
    RealTimeCooldownNotPassed,
    LockedSavable,
};

