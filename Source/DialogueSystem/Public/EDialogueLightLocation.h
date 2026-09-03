#pragma once
#include "CoreMinimal.h"
#include "EDialogueLightLocation.generated.h"

UENUM(BlueprintType)
enum class EDialogueLightLocation : uint8 {
    Interior,
    Exterior,
    Mine,
    Cave,
    Astral,
    AoH,
};

