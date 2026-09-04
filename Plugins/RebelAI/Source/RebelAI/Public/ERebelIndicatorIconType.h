#pragma once
#include "CoreMinimal.h"
#include "ERebelIndicatorIconType.generated.h"

UENUM(BlueprintType)
enum class ERebelIndicatorIconType : uint8 {
    Defending,
    AttackingFromTheLeft,
    AttackingFromTheRight,
    AttackingFromTheTop,
    AttackingFromTheBottom,
    AttackingFromTheLeft_ParryWindow,
    AttackingFromTheRight_ParryWindow,
    AttackingFromTheTop_ParryWindow,
    AttackingFromTheBottom_ParryWindow,
    AttackingUnblockable,
    WeakSpotOnTheLeft,
    WeakSpotOnTheRight,
    WeakSpotOnTheTop,
    WeakSpotOnTheBottom,
};

