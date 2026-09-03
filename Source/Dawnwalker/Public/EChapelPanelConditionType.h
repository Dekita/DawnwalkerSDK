#pragma once
#include "CoreMinimal.h"
#include "EChapelPanelConditionType.generated.h"

UENUM(BlueprintType)
enum class EChapelPanelConditionType : uint8 {
    Opened,
    Closed,
    ChapelWidgetOpened,
    ChapelWidgetClosed,
};

