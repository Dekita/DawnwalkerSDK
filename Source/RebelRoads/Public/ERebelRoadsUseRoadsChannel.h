#pragma once
#include "CoreMinimal.h"
#include "ERebelRoadsUseRoadsChannel.generated.h"

UENUM(BlueprintType)
enum class ERebelRoadsUseRoadsChannel : uint8 {
    Volume,
    Trait,
    Blueprint,
    BTServiceIgnoreRoads,
    Max,
};

