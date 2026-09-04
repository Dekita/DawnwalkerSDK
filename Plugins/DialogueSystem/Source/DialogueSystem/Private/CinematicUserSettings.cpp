#include "CinematicUserSettings.h"

UCinematicUserSettings::UCinematicUserSettings() {
    this->bAllowMovieSetVisualization = true;
}

UCinematicUserSettings* UCinematicUserSettings::Get() {
    return NULL;
}


