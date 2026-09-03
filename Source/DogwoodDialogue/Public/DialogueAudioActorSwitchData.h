#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DialogueAudioActorSwitchData.generated.h"

class UAkSwitchValue;

USTRUCT(BlueprintType)
struct DOGWOODDIALOGUE_API FDialogueAudioActorSwitchData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SpeakerIdentityTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkSwitchValue> SwitchValue;
    
    FDialogueAudioActorSwitchData();
};

