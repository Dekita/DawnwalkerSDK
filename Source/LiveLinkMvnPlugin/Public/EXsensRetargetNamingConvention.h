#pragma once
#include "CoreMinimal.h"
#include "EXsensRetargetNamingConvention.generated.h"

UENUM(BlueprintType)
enum class EXsensRetargetNamingConvention : uint8 {
    Default,
    Custom,
    Maya,
    XSens,
    Manual,
};

