#pragma once
#include "CoreMinimal.h"
#include "DialogueNodeBase.h"
#include "GameplayTagContainer.h"
#include "DialogueNodeAudioPushMusicState.generated.h"

UCLASS(Blueprintable)
class DOGWOODDIALOGUE_API UDialogueNodeAudioPushMusicState : public UDialogueNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MusicTag;
    
    UDialogueNodeAudioPushMusicState();

};

