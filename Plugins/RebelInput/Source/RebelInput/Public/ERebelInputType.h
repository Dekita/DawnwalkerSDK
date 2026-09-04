#pragma once
#include "CoreMinimal.h"
#include "ERebelInputType.generated.h"

UENUM(BlueprintType)
enum class ERebelInputType : uint8 {
    None,
    UserMappable,
    PresetOnly,
};

