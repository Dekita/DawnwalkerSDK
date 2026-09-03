#pragma once
#include "CoreMinimal.h"
#include "QuestNodeWaitingBase.h"
#include "EDayPhaseCondition.h"
#include "QuestNodePause.generated.h"

class UQuestConditionType;

UCLASS(Blueprintable)
class DOGWOODQUEST_API UQuestNodePause : public UQuestNodeWaitingBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UQuestConditionType* Condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDayPhaseCondition DayPhaseCondition;
    
public:
    UQuestNodePause();

};

