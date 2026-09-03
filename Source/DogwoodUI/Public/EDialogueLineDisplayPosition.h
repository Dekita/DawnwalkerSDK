#pragma once
#include "CoreMinimal.h"
#include "EDialogueLineDisplayPosition.generated.h"

UENUM(BlueprintType)
enum class EDialogueLineDisplayPosition : uint8 {
    Hidden,
    Overhead,
    Bottom,
    Accessibility,
};

