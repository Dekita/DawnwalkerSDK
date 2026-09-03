#pragma once
#include "CoreMinimal.h"
#include "DawnwalkerLookAtTargetTracking.h"
#include "DawnwalkerLookAtTargetPermanentTracking.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDawnwalkerLookAtTargetPermanentTracking : public FDawnwalkerLookAtTargetTracking {
    GENERATED_BODY()
public:
    FDawnwalkerLookAtTargetPermanentTracking();
};

