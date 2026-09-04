#pragma once
#include "CoreMinimal.h"
#include "NotificationInfo.h"
#include "TraitPointsNotificationInfo.generated.h"

UCLASS(Blueprintable)
class UTraitPointsNotificationInfo : public UNotificationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TraitPointsChange;
    
    UTraitPointsNotificationInfo();

};

