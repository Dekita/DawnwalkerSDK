#pragma once
#include "CoreMinimal.h"
#include "RegionData.h"
#include "NotificationInfo.h"
#include "RegionEnteredNotificationInfo.generated.h"

UCLASS(Blueprintable)
class URegionEnteredNotificationInfo : public UNotificationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRegionData RegionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsNewlyDiscovered;
    
    URegionEnteredNotificationInfo();

};

