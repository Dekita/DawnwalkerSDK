#pragma once
#include "CoreMinimal.h"
#include "EClothingSoundType.generated.h"

UENUM(BlueprintType)
enum class EClothingSoundType : uint8 {
    Naked,
    Cloth,
    Leather,
    Mail,
    Plate,
};

