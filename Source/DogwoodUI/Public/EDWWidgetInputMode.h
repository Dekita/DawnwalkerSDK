#pragma once
#include "CoreMinimal.h"
#include "EDWWidgetInputMode.generated.h"

UENUM(BlueprintType)
enum class EDWWidgetInputMode : uint8 {
    Default,
    GameAndMenu,
    Game,
    Menu,
};

