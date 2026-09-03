#pragma once
#include "CoreMinimal.h"
#include "ETagStateAction.generated.h"

UENUM(BlueprintType)
enum class ETagStateAction : uint8 {
    Add,
    Remove,
    Set,
};

