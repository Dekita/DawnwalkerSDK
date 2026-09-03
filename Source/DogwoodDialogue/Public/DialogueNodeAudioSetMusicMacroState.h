#pragma once
#include "CoreMinimal.h"
#include "DialogueNodeBase.h"
#include "GameplayTagContainer.h"
#include "DialogueNodeAudioSetMusicMacroState.generated.h"

UCLASS(Blueprintable)
class DOGWOODDIALOGUE_API UDialogueNodeAudioSetMusicMacroState : public UDialogueNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MacroStateTag;
    
    UDialogueNodeAudioSetMusicMacroState();

};

