#pragma once
#include "CoreMinimal.h"
#include "EDayPhase.h"
#include "QuestNode.h"
#include "QuestNodeDayPhaseBase.generated.h"

UCLASS(Abstract, Blueprintable)
class DAWNWALKER_API UQuestNodeDayPhaseBase : public UQuestNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDayPhase DayPhase;
    
public:
    UQuestNodeDayPhaseBase();

};

