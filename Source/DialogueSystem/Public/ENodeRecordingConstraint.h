#pragma once
#include "CoreMinimal.h"
#include "ENodeRecordingConstraint.generated.h"

UENUM(BlueprintType)
enum class ENodeRecordingConstraint : uint8 {
    SoundSync,
    TimeConstraint,
    StrictTimeConstraint,
    Unrestricted,
    Invalid,
};

