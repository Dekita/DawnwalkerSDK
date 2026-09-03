#pragma once
#include "CoreMinimal.h"
#include "EDawnwalkerLookAtTargetType.generated.h"

UENUM(BlueprintType)
enum class EDawnwalkerLookAtTargetType : uint8 {
    Permanent,
    Transient,
};

