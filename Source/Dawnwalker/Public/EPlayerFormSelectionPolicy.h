#pragma once
#include "CoreMinimal.h"
#include "EPlayerFormSelectionPolicy.generated.h"

UENUM(BlueprintType)
enum class EPlayerFormSelectionPolicy : uint8 {
    BasedOnTimeOfDay,
    ForceHuman,
    ForceVampire,
};

