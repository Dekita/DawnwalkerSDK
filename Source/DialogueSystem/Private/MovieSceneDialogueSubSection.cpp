#include "MovieSceneDialogueSubSection.h"

UMovieSceneDialogueSubSection::UMovieSceneDialogueSubSection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VoiceImportLock = EDialogueSubSequenceLock::Start;
}


