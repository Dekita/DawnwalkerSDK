#pragma once
#include "CoreMinimal.h"
#include "ECameraGroup.generated.h"

UENUM(BlueprintType)
namespace ECameraGroup {
    enum Type {
        Default,
        Gameplay,
        Script,
    };
}

