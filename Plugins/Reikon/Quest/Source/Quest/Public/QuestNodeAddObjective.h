#pragma once
#include "CoreMinimal.h"
#include "EObjectiveState.h"
#include "ETrackedQuestType.h"
#include "QuestNodeObjectiveBase.h"
#include "QuestNodeAddObjective.generated.h"

UCLASS(Blueprintable)
class QUEST_API UQuestNodeAddObjective : public UQuestNodeObjectiveBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EObjectiveState CompletePrevious;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETrackedQuestType TrackedQuestType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTriggerAutosave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AutosaveSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReactivateQuestIfNeeded;
    
public:
    UQuestNodeAddObjective();

};

