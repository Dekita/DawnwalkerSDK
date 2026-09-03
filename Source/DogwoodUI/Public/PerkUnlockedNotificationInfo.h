#pragma once
#include "CoreMinimal.h"
#include "NotificationInfo.h"
#include "PerkUnlockedNotificationInfo.generated.h"

UCLASS(Blueprintable)
class DOGWOODUI_API UPerkUnlockedNotificationInfo : public UNotificationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UnlockedTrait;
    
    UPerkUnlockedNotificationInfo();

};

