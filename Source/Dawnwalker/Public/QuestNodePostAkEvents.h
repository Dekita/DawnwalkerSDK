#pragma once
#include "CoreMinimal.h"
#include "QuestNode.h"
#include "PostEventData.h"
#include "QuestNodePostAkEvents.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodePostAkEvents : public UQuestNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPostEventData> EventData;
    
    UQuestNodePostAkEvents();

};

