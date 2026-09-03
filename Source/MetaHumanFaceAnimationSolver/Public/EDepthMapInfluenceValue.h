#pragma once
#include "CoreMinimal.h"
#include "EDepthMapInfluenceValue.generated.h"

UENUM(BlueprintType)
enum class EDepthMapInfluenceValue : uint8 {
    None,
    Low,
    High,
};

