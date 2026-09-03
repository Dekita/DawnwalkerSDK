#pragma once
#include "CoreMinimal.h"
#include "EReadableSectionType.generated.h"

UENUM(BlueprintType)
enum class EReadableSectionType : uint8 {
    None,
    Text,
    Image,
};

