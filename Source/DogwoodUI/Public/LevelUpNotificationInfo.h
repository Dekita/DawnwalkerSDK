#pragma once
#include "CoreMinimal.h"
#include "NotificationInfo.h"
#include "LevelUpNotificationInfo.generated.h"

UCLASS(Blueprintable)
class DOGWOODUI_API ULevelUpNotificationInfo : public UNotificationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Level;
    
    ULevelUpNotificationInfo();

};

