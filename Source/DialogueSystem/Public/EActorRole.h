#pragma once
#include "CoreMinimal.h"
#include "EActorRole.generated.h"

UENUM(BlueprintType)
enum class EActorRole : uint8 {
    Speaker,
    Listener,
};

