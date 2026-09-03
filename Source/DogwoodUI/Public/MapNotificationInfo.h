#pragma once
#include "CoreMinimal.h"
#include "NotificationInfo.h"
#include "MapNotificationInfo.generated.h"

UCLASS(Blueprintable)
class DOGWOODUI_API UMapNotificationInfo : public UNotificationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 MappinId;
    
    UMapNotificationInfo();

};

