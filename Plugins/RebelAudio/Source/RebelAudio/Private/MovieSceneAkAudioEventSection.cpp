#include "MovieSceneAkAudioEventSection.h"

UMovieSceneAkAudioEventSection::UMovieSceneAkAudioEventSection() {
    this->RetriggerEvent = false;
    this->ScrubTailLengthMs = 0;
    this->StopAtSectionEnd = true;
    this->MaxSourceDuration = -1.00f;
}


