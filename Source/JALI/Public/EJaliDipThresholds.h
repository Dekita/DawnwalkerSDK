#pragma once
#include "CoreMinimal.h"
#include "EJaliDipThresholds.generated.h"

UENUM()
enum class EJaliDipThresholds : uint16 {
    Mini = 100,
    Tiny = 150,
    Fast = 200,
    Normal = 250,
    Slow = 300,
    Huge = 400,
    Vast = 500,
    Mega = 1000,
};

