#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "QuestNode.h"
#include "QuestNodeAudioBranchContainsExplicitState.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeAudioBranchContainsExplicitState : public UQuestNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MusicTag;
    
    UQuestNodeAudioBranchContainsExplicitState();

};

