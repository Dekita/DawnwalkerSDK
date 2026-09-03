#pragma once
#include "CoreMinimal.h"
#include "EJaliSupplementalTransitions.generated.h"

UENUM()
enum class EJaliSupplementalTransitions : uint16 {
    None = 2,
    Mini = 50,
    Tiny = 80,
    Fast = 100,
    Normal = 120,
    Slow = 150,
    Long = 180,
    Huge = 200,
    Vast = 300,
    Mega = 400,
    Giant = 600,
    Plaid = 900,
};

