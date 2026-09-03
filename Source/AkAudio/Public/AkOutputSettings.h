#pragma once
#include "CoreMinimal.h"
#include "AkChannelConfiguration.h"
#include "PanningRule.h"
#include "AkOutputSettings.generated.h"

class UAkAudioDeviceShareSet;

USTRUCT(BlueprintType)
struct AKAUDIO_API FAkOutputSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioDeviceShareSet* AudioDeviceShareSet;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 IdDevice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    PanningRule PanRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AkChannelConfiguration ChannelConfig;
    
    FAkOutputSettings();
};

