#pragma once
#include "CoreMinimal.h"
#include "EDrinkBloodConditionType.generated.h"

UENUM(BlueprintType)
enum class EDrinkBloodConditionType : uint8 {
    Initialized,
    Struggle,
    Enter,
    Exit,
    InProgress,
    NotInProgress,
};

