#pragma once
#include "CoreMinimal.h"
#include "DawnwalkerLookAtTarget.h"
#include "DawnwalkerControllerLookAtTarget.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDawnwalkerControllerLookAtTarget : public FDawnwalkerLookAtTarget {
    GENERATED_BODY()
public:
    FDawnwalkerControllerLookAtTarget();
};

