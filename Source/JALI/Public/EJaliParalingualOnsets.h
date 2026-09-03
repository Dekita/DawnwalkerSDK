#pragma once
#include "CoreMinimal.h"
#include "EJaliParalingualOnsets.generated.h"

UENUM(BlueprintType)
enum class EJaliParalingualOnsets : uint8 {
    ExcitedWithNoise,
    NormalWithNoise,
    RelaxedWithNoise,
    MS100 = 10,
    MS120 = 12,
    MS150 = 15,
    MS180 = 18,
    MS200 = 20,
    MS220 = 22,
    MS250 = 25,
    MS300 = 30,
    MS350 = 35,
};

