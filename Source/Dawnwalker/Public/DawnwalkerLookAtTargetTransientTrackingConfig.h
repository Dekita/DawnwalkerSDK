#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DawnwalkerLookAtTargetTransientTrackingParams.h"
#include "DawnwalkerLookAtTargetTransientTrackingConfig.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UDawnwalkerLookAtTargetTransientTrackingConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDawnwalkerLookAtTargetTransientTrackingParams TrackingParams;
    
    UDawnwalkerLookAtTargetTransientTrackingConfig();

};

