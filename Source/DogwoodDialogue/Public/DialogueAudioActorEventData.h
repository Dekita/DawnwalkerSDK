#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DialogueAudioActorEventData.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct DOGWOODDIALOGUE_API FDialogueAudioActorEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SpeakerIdentityTag;
    
    FDialogueAudioActorEventData();
};

