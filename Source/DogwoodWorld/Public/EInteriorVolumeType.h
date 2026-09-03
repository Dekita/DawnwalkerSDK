#pragma once
#include "CoreMinimal.h"
#include "EInteriorVolumeType.generated.h"

UENUM(BlueprintType)
enum class EInteriorVolumeType : uint8 {
    Default,
    Interior,
    Habitat,
    Cave,
    AgeOfHeroes,
    Mines,
    Slot1,
    Slot2,
};

