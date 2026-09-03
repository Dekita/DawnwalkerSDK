#pragma once
#include "CoreMinimal.h"
#include "ETimeOfDay.generated.h"

UENUM(BlueprintType)
enum class ETimeOfDay : uint8 {
    Hour_6 = 6,
    Hour_10 = 10,
    Hour_12 = 12,
    Hour_18 = 18,
    Hour_0 = 0,
    Hour_1,
    Hour_2,
    Hour_3,
    Hour_4,
    Hour_5,
    Hour_7 = 7,
    Hour_8,
    Hour_9,
    Hour_11 = 11,
    Hour_13 = 13,
    Hour_14,
    Hour_15,
    Hour_16,
    Hour_17,
    Hour_19 = 19,
    Hour_20,
    Hour_21,
    Hour_22,
    Hour_23,
    Invalid = 255,
};

