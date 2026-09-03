#pragma once
#include "CoreMinimal.h"
#include "DawnwalkerLookAtTargetTracking.h"
#include "DawnwalkerLookAtTargetTransientTracking.generated.h"

class UDawnwalkerLookAtTargetTransientTrackingConfig;

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDawnwalkerLookAtTargetTransientTracking : public FDawnwalkerLookAtTargetTracking {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDawnwalkerLookAtTargetTransientTrackingConfig* TrackingConfig;
    
    FDawnwalkerLookAtTargetTransientTracking();
};

