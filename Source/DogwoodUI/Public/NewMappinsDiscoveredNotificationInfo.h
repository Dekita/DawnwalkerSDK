#pragma once
#include "CoreMinimal.h"
#include "NotificationInfo.h"
#include "NewMappinsDiscoveredNotificationInfo.generated.h"

UCLASS(Blueprintable)
class UNewMappinsDiscoveredNotificationInfo : public UNotificationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UNewMappinsDiscoveredNotificationInfo();

};

