#pragma once
#include "CoreMinimal.h"
#include "EJaliPhoneLength.generated.h"

UENUM(BlueprintType)
enum class EJaliPhoneLength : uint8 {
    Ignore,
    Min,
    Low,
    Moderate,
    High,
    Max,
};

