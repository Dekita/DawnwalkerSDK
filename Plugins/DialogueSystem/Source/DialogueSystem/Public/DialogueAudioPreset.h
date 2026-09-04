#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DialogueAudioPreset.generated.h"

class UAkAudioEvent;
class UAkStateValue;

UCLASS(Blueprintable)
class DIALOGUESYSTEM_API UDialogueAudioPreset : public UDataAsset {
    GENERATED_BODY()
public:
    UDialogueAudioPreset();

};

