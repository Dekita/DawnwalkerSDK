#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "QuestNode.h"
#include "QuestNodeAudioReplaceExplicitMusicState.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeAudioReplaceExplicitMusicState : public UQuestNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MusicTag;
    
    UQuestNodeAudioReplaceExplicitMusicState();

};

