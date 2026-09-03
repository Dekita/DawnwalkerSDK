#pragma once
#include "CoreMinimal.h"
#include "EFontSize.generated.h"

UENUM(BlueprintType)
enum class EFontSize : uint8 {
    Small,
    Regular,
    Header,
    ExtraLarge,
    Huge,
};

