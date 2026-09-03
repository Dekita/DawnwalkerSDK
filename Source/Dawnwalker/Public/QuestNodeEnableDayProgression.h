#pragma once
#include "CoreMinimal.h"
#include "QuestNode.h"
#include "QuestNodeEnableDayProgression.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeEnableDayProgression : public UQuestNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableDayProgression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRestoreTimeWhenDayProgressionWasDisabled;
    
public:
    UQuestNodeEnableDayProgression();

};

