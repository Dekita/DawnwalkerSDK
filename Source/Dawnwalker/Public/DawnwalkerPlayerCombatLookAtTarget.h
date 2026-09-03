#pragma once
#include "CoreMinimal.h"
#include "DawnwalkerControllerLookAtTarget.h"
#include "DawnwalkerPlayerCombatLookAtTarget.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDawnwalkerPlayerCombatLookAtTarget : public FDawnwalkerControllerLookAtTarget {
    GENERATED_BODY()
public:
    FDawnwalkerPlayerCombatLookAtTarget();
};

