#pragma once
#include "CoreMinimal.h"
#include "ERebelRoadsVirtualNodeType.generated.h"

UENUM(BlueprintType)
enum class ERebelRoadsVirtualNodeType : uint8 {
    None,
    Start,
    End,
    ProjectedStart,
    ProjectedEnd,
    BeforeProjectedStart,
    AfterProjectedStart,
    BeforeProjectedEnd,
    AfterProjectedEnd,
    Count,
};

