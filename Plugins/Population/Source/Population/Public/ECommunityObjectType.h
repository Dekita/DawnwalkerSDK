#pragma once
#include "CoreMinimal.h"
#include "ECommunityObjectType.generated.h"

UENUM(BlueprintType)
enum class ECommunityObjectType : uint8 {
    Invalid,
    ActionPoint,
    WayPoint,
    SpawnPoint,
    None,
};

