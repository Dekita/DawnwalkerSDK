#pragma once
#include "CoreMinimal.h"
#include "EFFXFSR4PaceRHIFrameMode.generated.h"

UENUM(BlueprintType)
enum class EFFXFSR4PaceRHIFrameMode : uint8 {
    None,
    CustomPresentVSync,
};

