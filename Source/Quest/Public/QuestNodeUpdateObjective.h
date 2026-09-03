#pragma once
#include "CoreMinimal.h"
#include "QuestNodeObjectiveBase.h"
#include "QuestNodeUpdateObjective.generated.h"

UCLASS(Blueprintable)
class QUEST_API UQuestNodeUpdateObjective : public UQuestNodeObjectiveBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CounterChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CounterValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTriggerAutosave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AutosaveSource;
    
public:
    UQuestNodeUpdateObjective();

};

