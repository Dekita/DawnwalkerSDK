#pragma once
#include "CoreMinimal.h"
#include "EQuestTimeProgressionType.generated.h"

UENUM(BlueprintType)
enum class EQuestTimeProgressionType : uint8 {
    None,
    Minimal,
    Small,
    Medium,
    Large,
    Huge,
    HalfDay,
    FullDay,
    Custom,
};

