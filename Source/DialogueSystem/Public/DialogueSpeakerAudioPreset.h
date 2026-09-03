#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DialogueSpeakerAudioPreset.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable)
class DIALOGUESYSTEM_API UDialogueSpeakerAudioPreset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* LineStartEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* LineEndEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> VOEvent;
    
    UDialogueSpeakerAudioPreset();

};

