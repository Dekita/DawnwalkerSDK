#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "QuestNode.h"
#include "QuestNodeAudioBranchCompareMusicMacroState.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeAudioBranchCompareMusicMacroState : public UQuestNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MusicTag;
    
    UQuestNodeAudioBranchCompareMusicMacroState();

};

