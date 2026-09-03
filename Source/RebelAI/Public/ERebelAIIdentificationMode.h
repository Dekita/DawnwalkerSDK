#pragma once
#include "CoreMinimal.h"
#include "ERebelAIIdentificationMode.generated.h"

UENUM(BlueprintType)
enum class ERebelAIIdentificationMode : uint8 {
    Name,
    GameplayTag,
    Auto,
};

