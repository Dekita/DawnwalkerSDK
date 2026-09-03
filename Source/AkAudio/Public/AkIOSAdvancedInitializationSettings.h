#pragma once
#include "CoreMinimal.h"
#include "AkAdvancedInitializationSettingsWithMultiCoreRendering.h"
#include "AkIOSAdvancedInitializationSettings.generated.h"

USTRUCT(BlueprintType)
struct AKAUDIO_API FAkIOSAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 uNumSpatialAudioPointSources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVerboseSystemOutput;
    
    FAkIOSAdvancedInitializationSettings();
};

