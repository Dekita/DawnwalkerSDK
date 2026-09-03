#pragma once
#include "CoreMinimal.h"
#include "EBOIZoomKind.generated.h"

UENUM(BlueprintType)
enum class EBOIZoomKind : uint8 {
    Translation,
    FOV,
};

