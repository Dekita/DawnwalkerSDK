#pragma once
#include "CoreMinimal.h"
#include "EQuestState.h"
#include "QuestNode.h"
#include "QuestNodeEndMultipleQuests.generated.h"

class UQuest;

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeEndMultipleQuests : public UQuestNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UQuest*> ExcludedQuests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestState State;
    
public:
    UQuestNodeEndMultipleQuests();

};

