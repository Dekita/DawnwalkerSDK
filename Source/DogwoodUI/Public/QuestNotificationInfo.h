#pragma once
#include "CoreMinimal.h"
#include "EQuestNotificationType.h"
#include "NotificationInfo.h"
#include "QuestNotificationInfo.generated.h"

class UQuest;

UCLASS(Blueprintable)
class DOGWOODUI_API UQuestNotificationInfo : public UNotificationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestNotificationType QuestNotificationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuest* TargetQuest;
    
    UQuestNotificationInfo();

};

