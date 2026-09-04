#pragma once
#include "CoreMinimal.h"
#include "EPhaseActivationMode.generated.h"

UENUM(BlueprintType)
enum class EPhaseActivationMode : uint8 {
    LeaveExistingStubsWhereTheyAre,
    TeleportExistingStubs,
    OnLoadGame,
    PopulationArea,
};

