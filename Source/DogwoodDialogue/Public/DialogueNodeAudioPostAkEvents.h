#pragma once
#include "CoreMinimal.h"
#include "DialogueNodeBase.h"
#include "DialogueAudioActorEventData.h"
#include "DialogueNodeAudioPostAkEvents.generated.h"

UCLASS(Blueprintable)
class UDialogueNodeAudioPostAkEvents : public UDialogueNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FallbackToGlobalPost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDialogueAudioActorEventData> Events;
    
    UDialogueNodeAudioPostAkEvents();

};

