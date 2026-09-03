#pragma once
#include "CoreMinimal.h"
#include "EStubDebugMode.generated.h"

UENUM(BlueprintType)
enum class EStubDebugMode : uint8 {
    Off,
    WhenThePanelIsShown,
    Always,
};

