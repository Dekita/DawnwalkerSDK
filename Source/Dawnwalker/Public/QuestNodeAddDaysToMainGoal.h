#pragma once
#include "CoreMinimal.h"
#include "QuestNodeActionBase.h"
#include "QuestNodeAddDaysToMainGoal.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeAddDaysToMainGoal : public UQuestNodeActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AddDays;
    
public:
    UQuestNodeAddDaysToMainGoal();

};

