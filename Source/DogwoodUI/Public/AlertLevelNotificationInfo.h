#pragma once
#include "CoreMinimal.h"
#include "AlertLevelChangeInfo.h"
#include "NotificationInfo.h"
#include "AlertLevelNotificationInfo.generated.h"

UCLASS(Blueprintable)
class UAlertLevelNotificationInfo : public UNotificationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAlertLevelChangeInfo ChangeInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOfficerAngeredNotification;
    
    UAlertLevelNotificationInfo();

};

