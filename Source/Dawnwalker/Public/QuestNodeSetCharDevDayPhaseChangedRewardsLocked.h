#pragma once
#include "CoreMinimal.h"
#include "QuestNode.h"
#include "QuestNodeSetCharDevDayPhaseChangedRewardsLocked.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeSetCharDevDayPhaseChangedRewardsLocked : public UQuestNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDayPhaseChangeRewardsLocked;
    
public:
    UQuestNodeSetCharDevDayPhaseChangedRewardsLocked();

};

