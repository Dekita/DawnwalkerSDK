#pragma once
#include "CoreMinimal.h"
#include "QuestConditionType.h"
#include "QuestConditionTrackedQuestType.generated.h"

class UQuest;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UQuestConditionTrackedQuestType : public UQuestConditionType {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuest* QuestToTrack;
    
public:
    UQuestConditionTrackedQuestType();

};

