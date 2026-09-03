#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "QuestNode.h"
#include "QuestNodeAudioBranchComparePeekExplicitMusicState.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeAudioBranchComparePeekExplicitMusicState : public UQuestNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MusicTag;
    
    UQuestNodeAudioBranchComparePeekExplicitMusicState();

};

