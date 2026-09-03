#pragma once
#include "CoreMinimal.h"
#include "EJaliNeckOnsets.generated.h"

UENUM(BlueprintType)
enum class EJaliNeckOnsets : uint8 {
    Default,
    MS100 = 10,
    MS120 = 12,
    MS150 = 15,
    MS180 = 18,
    MS200 = 20,
    MS220 = 22,
    MS250 = 25,
    MS300 = 30,
    MS350 = 36,
    MS400 = 40,
    MS500 = 50,
    MS600 = 60,
};

