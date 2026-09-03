#pragma once
#include "CoreMinimal.h"
#include "EBiomesRuntimeSpawning.generated.h"

UENUM(BlueprintType)
enum class EBiomesRuntimeSpawning : uint8 {
    Auto,
    Never,
    Always,
};

