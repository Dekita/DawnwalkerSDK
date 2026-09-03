#pragma once
#include "CoreMinimal.h"
#include "DialogueNodeBase.h"
#include "DialogueAudioActorSwitchData.h"
#include "DialogueNodeAudioSetAkSwitches.generated.h"

UCLASS(Blueprintable)
class DOGWOODDIALOGUE_API UDialogueNodeAudioSetAkSwitches : public UDialogueNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FallbackToGlobalPost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDialogueAudioActorSwitchData> Switches;
    
    UDialogueNodeAudioSetAkSwitches();

};

