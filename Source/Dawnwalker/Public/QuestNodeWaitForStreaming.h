#pragma once
#include "CoreMinimal.h"
#include "QuestNode.h"
#include "QuestNodeWaitForStreaming.generated.h"

class UWorldPartition;

UCLASS(Blueprintable, Config=Game)
class DAWNWALKER_API UQuestNodeWaitForStreaming : public UQuestNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorldPartition* WorldPartition;
    
    UQuestNodeWaitForStreaming();

};

