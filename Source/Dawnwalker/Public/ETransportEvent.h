#pragma once
#include "CoreMinimal.h"
#include "ETransportEvent.generated.h"

UENUM(BlueprintType)
enum class ETransportEvent : uint8 {
    Activated,
    Deactivated,
    Defeated,
    GuardAreaEntered,
    GuardAreaLeft,
    CombatStarted,
    CombatStopped,
    Stopped,
    Resumed,
    Spawned,
    Despawned,
    Registered,
    Unregistered,
};

