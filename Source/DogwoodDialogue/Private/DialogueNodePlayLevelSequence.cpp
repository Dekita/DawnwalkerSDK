#include "DialogueNodePlayLevelSequence.h"

UDialogueNodePlayLevelSequence::UDialogueNodePlayLevelSequence() {
    this->AllowedSignalModes.AddDefaulted(3);
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->bPositionRelativeToMovieSet = false;
    this->bHideOtherActors = true;
    this->LoadedSequence = NULL;
    this->SequencePlayer = NULL;
    this->SequenceActor = NULL;
    this->TransformOriginActor = NULL;
}

void UDialogueNodePlayLevelSequence::OnPlaybackFinished() {
}


