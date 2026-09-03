#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "QuestNode.h"
#include "QuestNodeAudioSetMusicMacroState.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeAudioSetMusicMacroState : public UQuestNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MusicTag;
    
    UQuestNodeAudioSetMusicMacroState();

};

