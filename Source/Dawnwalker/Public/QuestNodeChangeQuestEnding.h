#pragma once
#include "CoreMinimal.h"
#include "QuestNode.h"
#include "QuestNodeChangeQuestEnding.generated.h"

class UQuest;

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeChangeQuestEnding : public UQuestNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuest* Quest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ChosenEnding;
    
public:
    UQuestNodeChangeQuestEnding();

};

