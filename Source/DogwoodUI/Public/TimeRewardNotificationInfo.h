#pragma once
#include "CoreMinimal.h"
#include "NotificationInfo.h"
#include "TimeRewardNotificationInfo.generated.h"

UCLASS(Blueprintable)
class DOGWOODUI_API UTimeRewardNotificationInfo : public UNotificationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Days;
    
    UTimeRewardNotificationInfo();

};

