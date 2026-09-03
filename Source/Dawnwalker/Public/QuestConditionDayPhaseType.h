#pragma once
#include "CoreMinimal.h"
#include "QuestConditionType.h"
#include "EDayPhase.h"
#include "QuestConditionDayPhaseType.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UQuestConditionDayPhaseType : public UQuestConditionType {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDayPhase DayPhase;
    
public:
    UQuestConditionDayPhaseType();

};

