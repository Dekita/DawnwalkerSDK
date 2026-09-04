#pragma once
#include "CoreMinimal.h"
#include "ERebelPlatformType.generated.h"

UENUM(BlueprintType)
enum class ERebelPlatformType : uint8 {
    Invalid,
    Windows,
    Mac,
    Linux,
    IOS,
    Android,
    Switch,
    XboxSeries,
    PS5,
    SteamDeck,
    PCHandheld,
    MAX,
};

