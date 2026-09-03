#pragma once
#include "CoreMinimal.h"
#include "RebelTableRowHandle.h"
#include "CombatXpRewardRowHandle.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FCombatXpRewardRowHandle : public FRebelTableRowHandle {
    GENERATED_BODY()
public:
    FCombatXpRewardRowHandle();
};

