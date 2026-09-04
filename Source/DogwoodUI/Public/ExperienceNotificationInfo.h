#pragma once
#include "CoreMinimal.h"
#include "NotificationInfo.h"
#include "ExperienceNotificationInfo.generated.h"

UCLASS(Blueprintable)
class UExperienceNotificationInfo : public UNotificationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 XPAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LevelPercentage;
    
    UExperienceNotificationInfo();

};

