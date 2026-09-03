#pragma once
#include "CoreMinimal.h"
#include "ECreatureCategoryType.generated.h"

UENUM(BlueprintType)
enum class ECreatureCategoryType : uint8 {
    None,
    Human,
    Animal,
    Monster,
};

