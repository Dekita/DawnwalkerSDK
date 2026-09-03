#include "OpenWorldContentMappin.h"

FOpenWorldContentMappin::FOpenWorldContentMappin() {
    this->DayPhase = EMappinDayPhaseType::Day;
    this->bLockedOnRegionEnter = false;
    this->InitialState = EMappinState::None;
}

