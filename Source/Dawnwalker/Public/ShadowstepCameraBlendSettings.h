#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ShadowstepCameraBlendSettings.generated.h"

class URebelCameraMode;

USTRUCT(BlueprintType)
struct DAWNWALKER_API FShadowstepCameraBlendSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URebelCameraMode> CameraMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinBlendInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendOutTriggerTime;
    
    FShadowstepCameraBlendSettings();
};

