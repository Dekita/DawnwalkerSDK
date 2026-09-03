#pragma once
#include "CoreMinimal.h"
#include "QuestNodeActionBase.h"
#include "QuestNodeSetRegionEnteredNotificationsBlocked.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeSetRegionEnteredNotificationsBlocked : public UQuestNodeActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLocked;
    
public:
    UQuestNodeSetRegionEnteredNotificationsBlocked();

};

