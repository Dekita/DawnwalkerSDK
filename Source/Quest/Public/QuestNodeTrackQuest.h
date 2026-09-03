#pragma once
#include "CoreMinimal.h"
#include "QuestNodeActionBase.h"
#include "QuestNodeTrackQuest.generated.h"

class UQuest;

UCLASS(Blueprintable)
class QUEST_API UQuestNodeTrackQuest : public UQuestNodeActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuest* Quest;
    
public:
    UQuestNodeTrackQuest();

};

