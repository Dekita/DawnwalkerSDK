#pragma once
#include "CoreMinimal.h"
#include "EBodyGroomType.generated.h"

UENUM(BlueprintType)
enum class EBodyGroomType : uint8 {
    Invalid,
    Beard,
    Eyebrows,
};

