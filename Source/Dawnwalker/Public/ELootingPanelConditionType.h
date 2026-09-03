#pragma once
#include "CoreMinimal.h"
#include "ELootingPanelConditionType.generated.h"

UENUM(BlueprintType)
enum class ELootingPanelConditionType : uint8 {
    Closed,
    Opened,
    OnClose,
    OnOpen,
};

