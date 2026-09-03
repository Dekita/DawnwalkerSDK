#pragma once
#include "CoreMinimal.h"
#include "DayTime.h"
#include "QuestNode.h"
#include "QuestNodeGameTimePeriodBase.generated.h"

UCLASS(Abstract, Blueprintable)
class DAWNWALKER_API UQuestNodeGameTimePeriodBase : public UQuestNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDayTime DayTimeStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDayTime DayTimeEnd;
    
public:
    UQuestNodeGameTimePeriodBase();

};

