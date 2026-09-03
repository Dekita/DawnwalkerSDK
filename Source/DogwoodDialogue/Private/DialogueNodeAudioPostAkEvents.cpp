#include "DialogueNodeAudioPostAkEvents.h"

UDialogueNodeAudioPostAkEvents::UDialogueNodeAudioPostAkEvents() {
    this->AllowedSignalModes.AddDefaulted(3);
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->FallbackToGlobalPost = false;
}


