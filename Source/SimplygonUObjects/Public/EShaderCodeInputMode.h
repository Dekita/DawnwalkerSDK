#pragma once
#include "CoreMinimal.h"
#include "EShaderCodeInputMode.generated.h"

UENUM(BlueprintType)
enum class EShaderCodeInputMode : uint8 {
    Source,
    Binary,
};

