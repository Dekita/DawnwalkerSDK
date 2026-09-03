#pragma once
#include "CoreMinimal.h"
#include "ETangentCalculatorType.generated.h"

UENUM(BlueprintType)
enum class ETangentCalculatorType : uint8 {
    OrthonormalRightHanded,
    Autodesk3dsMax,
    OrthonormalLeftHanded,
    MikkTSpace,
    ImplicitOrthonormalRightHandedCompatible,
};

