#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DialogueSpeakerAudioPreset.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable)
class DIALOGUESYSTEM_API UDialogueSpeakerAudioPreset : public UDataAsset {
    GENERATED_BODY()
public:
    UDialogueSpeakerAudioPreset();

};

