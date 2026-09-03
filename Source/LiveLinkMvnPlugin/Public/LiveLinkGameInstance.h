#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "LiveLinkGameInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class LIVELINKMVNPLUGIN_API ULiveLinkGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 PortNumber;
    
    ULiveLinkGameInstance();

};

