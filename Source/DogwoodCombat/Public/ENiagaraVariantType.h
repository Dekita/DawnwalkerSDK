#pragma once
#include "CoreMinimal.h"
#include "ENiagaraVariantType.generated.h"

UENUM(BlueprintType)
enum class ENiagaraVariantType : uint8 {
    Float,
    Int,
    Bool,
    Vector,
    Color,
};

