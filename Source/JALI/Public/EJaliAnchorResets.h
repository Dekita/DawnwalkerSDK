#pragma once
#include "CoreMinimal.h"
#include "EJaliAnchorResets.generated.h"

UENUM(BlueprintType)
enum class EJaliAnchorResets : uint8 {
    None = 0,
    Puny = 20,
    Mini = 50,
    Tiny = 80,
    Fast = 100,
    Normal = 120,
    Slow = 150,
    Huge = 180,
    Vast = 200,
};

