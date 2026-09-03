#pragma once
#include "CoreMinimal.h"
#include "DawnwalkerLookAtTurning.h"
#include "DawnwalkerLookAtInstantTurning.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDawnwalkerLookAtInstantTurning : public FDawnwalkerLookAtTurning {
    GENERATED_BODY()
public:
    FDawnwalkerLookAtInstantTurning();
};

