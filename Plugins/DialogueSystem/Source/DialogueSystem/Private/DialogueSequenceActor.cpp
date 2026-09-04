#include "DialogueSequenceActor.h"

FDialogueSequenceActor::FDialogueSequenceActor() {
    this->SelectActor = NULL;
    this->Priority = EDialogueActorPriority::Main;
    this->AudioPreset = NULL;
    this->bIsInitiallyVisible = false;
    this->bBindToSpawnedActor = false;
    this->bIsOptional = false;
    this->bHideSubtitles = false;
    this->bOverheadSubtitlesAlwaysVisible = false;
}

