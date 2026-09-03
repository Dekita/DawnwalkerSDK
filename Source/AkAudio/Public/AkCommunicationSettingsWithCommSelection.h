#pragma once
#include "CoreMinimal.h"
#include "AkCommunicationSettings.h"
#include "EAkCommSystem.h"
#include "AkCommunicationSettingsWithCommSelection.generated.h"

USTRUCT(BlueprintType)
struct AKAUDIO_API FAkCommunicationSettingsWithCommSelection : public FAkCommunicationSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAkCommSystem CommunicationSystem;
    
    FAkCommunicationSettingsWithCommSelection();
};

