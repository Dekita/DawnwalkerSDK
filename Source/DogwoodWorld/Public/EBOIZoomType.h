#pragma once
#include "CoreMinimal.h"
#include "EBOIZoomType.generated.h"

UENUM(BlueprintType)
enum class EBOIZoomType : uint8 {
    VeryClose,
    Close,
    Medium,
    Far,
    VeryFar,
};

