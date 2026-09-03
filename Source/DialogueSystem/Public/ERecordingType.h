#pragma once
#include "CoreMinimal.h"
#include "ERecordingType.generated.h"

UENUM(BlueprintType)
enum class ERecordingType : uint8 {
    VO,
    NonVO,
    Nothing,
    Placeholder,
    Backup,
};

