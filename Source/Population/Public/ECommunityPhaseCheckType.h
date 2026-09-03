#pragma once
#include "CoreMinimal.h"
#include "ECommunityPhaseCheckType.generated.h"

UENUM(BlueprintType)
enum class ECommunityPhaseCheckType : uint8 {
    CurrentPhase,
    AnyPhase,
};

