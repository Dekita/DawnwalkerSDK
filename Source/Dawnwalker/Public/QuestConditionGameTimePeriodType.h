#pragma once
#include "CoreMinimal.h"
#include "QuestConditionType.h"
#include "DayTime.h"
#include "QuestConditionGameTimePeriodType.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UQuestConditionGameTimePeriodType : public UQuestConditionType {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDayTime DayTimeStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDayTime DayTimeEnd;
    
public:
    UQuestConditionGameTimePeriodType();

};

