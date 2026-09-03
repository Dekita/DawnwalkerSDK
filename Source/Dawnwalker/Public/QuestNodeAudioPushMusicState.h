#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "QuestNode.h"
#include "QuestNodeAudioPushMusicState.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeAudioPushMusicState : public UQuestNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MusicTag;
    
    UQuestNodeAudioPushMusicState();

};

