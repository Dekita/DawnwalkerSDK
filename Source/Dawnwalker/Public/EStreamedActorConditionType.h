#pragma once
#include "CoreMinimal.h"
#include "EStreamedActorConditionType.generated.h"

UENUM(BlueprintType)
enum class EStreamedActorConditionType : uint8 {
    Unknown,
    Exists,
    DoesNotExist,
    GetsStreamedIn,
    GetsStreamedOut,
};

