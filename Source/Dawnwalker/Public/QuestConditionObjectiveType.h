#pragma once
#include "CoreMinimal.h"
#include "QuestConditionType.h"
#include "EObjectiveState.h"
#include "EQuestState.h"
#include "SingleObjectiveRow.h"
#include "QuestConditionObjectiveType.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UQuestConditionObjectiveType : public UQuestConditionType {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSingleObjectiveRow Objective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestState QuestState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EObjectiveState> ObjectiveStates;
    
public:
    UQuestConditionObjectiveType();

};

