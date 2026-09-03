#pragma once
#include "CoreMinimal.h"
#include "LiveLinkSourceSettings.h"
#include "LiveLinkMvnSourceSettings.generated.h"

UCLASS(Blueprintable)
class LIVELINKMVNPLUGIN_API ULiveLinkMvnSourceSettings : public ULiveLinkSourceSettings {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PortNumber;
    
    ULiveLinkMvnSourceSettings();

};

