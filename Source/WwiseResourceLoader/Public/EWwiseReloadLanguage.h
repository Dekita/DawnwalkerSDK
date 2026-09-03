#pragma once
#include "CoreMinimal.h"
#include "EWwiseReloadLanguage.generated.h"

UENUM(BlueprintType)
enum class EWwiseReloadLanguage : uint8 {
    Manual,
    Immediate,
    Safe,
};

