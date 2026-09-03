#pragma once
#include "CoreMinimal.h"
#include "EDialogueActorPriority.generated.h"

UENUM(BlueprintType)
enum class EDialogueActorPriority : uint8 {
    Main,
    Background,
};

