#pragma once
#include "CoreMinimal.h"
#include "DayTime.h"
#include "QuestNode.h"
#include "QuestNodeGameTimeBase.generated.h"

UCLASS(Abstract, Blueprintable)
class DAWNWALKER_API UQuestNodeGameTimeBase : public UQuestNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDayTime DayTime;
    
public:
    UQuestNodeGameTimeBase();

};

