#pragma once
#include "CoreMinimal.h"
#include "QuestRewardInfo.h"
#include "NotificationInfo.h"
#include "QuestEndNotificationInfo.generated.h"

class UQuest;

UCLASS(Blueprintable)
class DOGWOODUI_API UQuestEndNotificationInfo : public UNotificationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestRewardInfo Reward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuest* TargetQuest;
    
    UQuestEndNotificationInfo();

};

