#pragma once
#include "CoreMinimal.h"
#include "EReadableCategory.generated.h"

UENUM(BlueprintType)
enum class EReadableCategory : uint8 {
    None,
    Letter,
    Book,
    Note,
    Max,
};

