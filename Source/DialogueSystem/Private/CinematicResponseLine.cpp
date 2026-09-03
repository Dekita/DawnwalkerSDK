#include "CinematicResponseLine.h"

FCinematicResponseLine::FCinematicResponseLine() {
    this->SubtitleDisplayMode = ESubtitleDisplayMode::Show;
    this->bOverrideVoPause = false;
    this->StartVoicePauseOverride = 0.00f;
    this->EndVoicePauseOverride = 0.00f;
    this->bUseDefaultGestureSettings = false;
    this->bUseDefaultHeadGestureSettings = false;
    this->bUseDefaultFaceGestureSettings = false;
    this->bIsJaliDisabled = false;
}

