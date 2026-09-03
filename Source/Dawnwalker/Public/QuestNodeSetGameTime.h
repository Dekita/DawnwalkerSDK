#pragma once
#include "CoreMinimal.h"
#include "QuestNodeGameTimeBase.h"
#include "QuestNodeSetGameTime.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeSetGameTime : public UQuestNodeGameTimeBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TriggerHUDInfoUpdate;
    
public:
    UQuestNodeSetGameTime();

};

