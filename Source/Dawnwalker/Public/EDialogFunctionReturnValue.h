#pragma once
#include "CoreMinimal.h"
#include "EDialogFunctionReturnValue.generated.h"

UENUM(BlueprintType)
enum class EDialogFunctionReturnValue : uint8 {
    OutTrue,
    OutFalse,
};

