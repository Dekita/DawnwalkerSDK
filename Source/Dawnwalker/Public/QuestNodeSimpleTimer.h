#pragma once
#include "CoreMinimal.h"
#include "QuestNodeWaitingBase.h"
#include "QuestNodeSimpleTimer.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeSimpleTimer : public UQuestNodeWaitingBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCountdown;
    
public:
    UQuestNodeSimpleTimer();

};

