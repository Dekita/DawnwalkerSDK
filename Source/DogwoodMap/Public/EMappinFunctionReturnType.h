#pragma once
#include "CoreMinimal.h"
#include "EMappinFunctionReturnType.generated.h"

UENUM(BlueprintType)
enum class EMappinFunctionReturnType : uint8 {
    Handled,
    NotHandled,
};

