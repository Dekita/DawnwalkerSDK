#pragma once
#include "CoreMinimal.h"
#include "EQuestNodeTransportState.generated.h"

UENUM(BlueprintType)
enum class EQuestNodeTransportState : uint8 {
    MovementFormationControlled,
    MovementForceActive,
    MovementForcePaused,
    EnabledOn,
    EnabledOff,
    ActivateOn,
    ActivateOff,
    ResetDefeated,
    RespawnPawns,
    ForceDefeat,
    DespawnAlive,
};

