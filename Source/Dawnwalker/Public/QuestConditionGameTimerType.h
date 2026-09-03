#pragma once
#include "CoreMinimal.h"
#include "QuestConditionType.h"
#include "DayTimeEx.h"
#include "QuestConditionGameTimerType.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UQuestConditionGameTimerType : public UQuestConditionType {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDayTimeEx GameTimeToPass;
    
public:
    UQuestConditionGameTimerType();

};

