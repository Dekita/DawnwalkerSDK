#pragma once
#include "CoreMinimal.h"
#include "ECommunityEntryOperation.generated.h"

UENUM(BlueprintType)
enum class ECommunityEntryOperation : uint8 {
    Activate,
    Deactivate,
    ActivateWithTeleport,
    Respawn,
    PopulationArea,
};

