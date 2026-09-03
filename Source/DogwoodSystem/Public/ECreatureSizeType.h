#pragma once
#include "CoreMinimal.h"
#include "ECreatureSizeType.generated.h"

UENUM(BlueprintType)
enum class ECreatureSizeType : uint8 {
    None,
    Small,
    Medium,
    Large,
    Max,
};

