#pragma once
#include "CoreMinimal.h"
#include "DialogueStartupTaskBase.h"
#include "AudioVoiceoverDialogueStartupTask.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODAUDIO_API UAudioVoiceoverDialogueStartupTask : public UDialogueStartupTaskBase {
    GENERATED_BODY()
public:
    UAudioVoiceoverDialogueStartupTask();

};

