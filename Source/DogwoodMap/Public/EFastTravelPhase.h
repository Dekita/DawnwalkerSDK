#pragma once
#include "CoreMinimal.h"
#include "EFastTravelPhase.generated.h"

UENUM(BlueprintType)
enum class EFastTravelPhase : uint8 {
    None,
    WaitingForOldAreaUnload,
    WaitingForDestinationLoad,
    Teleporting,
    Finishing,
};

