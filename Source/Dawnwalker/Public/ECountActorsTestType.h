#pragma once
#include "CoreMinimal.h"
#include "ECountActorsTestType.generated.h"

UENUM(BlueprintType)
enum class ECountActorsTestType : uint8 {
    NotFriendlyToPlayer,
    NotFriendlyToQuerier,
    AnyPawnNotFromFormation,
    AnyPawn,
    AnyPawnFromFormation,
    FriendlyToPlayer,
    FriendlyToQuerier,
};

