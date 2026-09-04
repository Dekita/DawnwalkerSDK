#pragma once
#include "CoreMinimal.h"
#include "QuestNodeObjectiveBase.h"
#include "QuestNodeReactivateObjective.generated.h"

UCLASS(Blueprintable)
class UQuestNodeReactivateObjective : public UQuestNodeObjectiveBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTriggerAutosave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AutosaveSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReactivateQuestIfNeeded;
    
public:
    UQuestNodeReactivateObjective();

};

