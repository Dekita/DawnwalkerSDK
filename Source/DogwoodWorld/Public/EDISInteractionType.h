#pragma once
#include "CoreMinimal.h"
#include "EDISInteractionType.generated.h"

UENUM(BlueprintType)
enum class EDISInteractionType : uint8 {
    Press,
    Hold,
    Tapping,
};

