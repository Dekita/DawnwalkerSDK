#pragma once
#include "CoreMinimal.h"
#include "QuestNode.h"
#include "EDayPhaseCondition.h"
#include "QuestNodeBranch.generated.h"

class UQuestConditionType;

UCLASS(Blueprintable)
class DOGWOODQUEST_API UQuestNodeBranch : public UQuestNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UQuestConditionType* Condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDayPhaseCondition DayPhaseCondition;
    
public:
    UQuestNodeBranch();

};

