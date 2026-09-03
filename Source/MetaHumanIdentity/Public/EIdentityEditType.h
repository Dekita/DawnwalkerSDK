#pragma once
#include "CoreMinimal.h"
#include "EIdentityEditType.generated.h"

UENUM(BlueprintType)
enum class EIdentityEditType : uint8 {
    Add,
    Remove,
    ChangeProperty,
    Count,
};

