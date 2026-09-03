#pragma once
#include "CoreMinimal.h"
#include "AkCommonInitializationSettings.h"
#include "AkCommonInitializationSettingsWithSampleRate.generated.h"

USTRUCT(BlueprintType)
struct AKAUDIO_API FAkCommonInitializationSettingsWithSampleRate : public FAkCommonInitializationSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 SampleRate;
    
    FAkCommonInitializationSettingsWithSampleRate();
};

