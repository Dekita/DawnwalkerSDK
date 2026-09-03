#pragma once
#include "CoreMinimal.h"
#include "EStreamingGroup.generated.h"

UENUM(BlueprintType)
enum class EStreamingGroup : uint8 {
    None,
    TeleportPrewarm,
};

