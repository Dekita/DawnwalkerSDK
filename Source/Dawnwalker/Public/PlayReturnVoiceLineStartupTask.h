#pragma once
#include "CoreMinimal.h"
#include "DialogueStartupTaskBase.h"
#include "PlayReturnVoiceLineStartupTask.generated.h"

class UCinematicDialogue;

UCLASS(Blueprintable, EditInlineNew)
class DAWNWALKER_API UPlayReturnVoiceLineStartupTask : public UDialogueStartupTaskBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCinematicDialogue* ReactionDialogueInstance;
    
public:
    UPlayReturnVoiceLineStartupTask();

};

