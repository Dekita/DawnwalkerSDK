#pragma once
#include "CoreMinimal.h"
#include "EJaliIntensities.generated.h"

UENUM(BlueprintType)
enum class EJaliIntensities : uint8 {
    Annotation,
    Trace = 5,
    Slight = 10,
    Wooden = 20,
    Stoic = 40,
    Restrained = 60,
    Measured = 80,
    Expressive = 100,
    Forceful = 120,
    Theatrical = 140,
    Excessive = 160,
    Extreme = 180,
    Ludicrous = 200,
};

