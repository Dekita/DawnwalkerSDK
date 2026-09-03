#pragma once
#include "CoreMinimal.h"
#include "EItemRarityType.generated.h"

UENUM(BlueprintType)
enum class EItemRarityType : uint8 {
    None,
    Junk,
    Common,
    Superior,
    Master,
    Epic,
    Unique,
    Quest,
    MAX,
};

