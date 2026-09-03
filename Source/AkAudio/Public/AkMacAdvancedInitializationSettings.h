#pragma once
#include "CoreMinimal.h"
#include "AkAdvancedInitializationSettingsWithMultiCoreRendering.h"
#include "AkMacAdvancedInitializationSettings.generated.h"

USTRUCT(BlueprintType)
struct AKAUDIO_API FAkMacAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 uNumSpatialAudioPointSources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVerboseSystemOutput;
    
    FAkMacAdvancedInitializationSettings();
};

