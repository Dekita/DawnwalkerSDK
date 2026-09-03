#pragma once
#include "CoreMinimal.h"
#include "EVampireUrgeDisplayMode.generated.h"

UENUM(BlueprintType)
enum class EVampireUrgeDisplayMode : uint8 {
    FullFunctionality,
    ChoiceOnly,
    UIOnly,
};

