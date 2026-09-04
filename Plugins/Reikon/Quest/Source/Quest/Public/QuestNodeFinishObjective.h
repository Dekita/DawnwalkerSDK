#pragma once
#include "CoreMinimal.h"
#include "EObjectiveState.h"
#include "QuestNodeObjectiveBase.h"
#include "QuestNodeFinishObjective.generated.h"

UCLASS(Blueprintable)
class UQuestNodeFinishObjective : public UQuestNodeObjectiveBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EObjectiveState FinalState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideAlreadyFinishedObjective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTriggerAutosave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AutosaveSource;
    
public:
    UQuestNodeFinishObjective();

};

