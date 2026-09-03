#pragma once
#include "CoreMinimal.h"
#include "EHubPanelConditionType.generated.h"

UENUM(BlueprintType)
enum class EHubPanelConditionType : uint8 {
    Opened,
    Closed,
};

