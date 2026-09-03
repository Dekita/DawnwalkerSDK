#include "GlobalAppearanceSettings.h"

UGlobalAppearanceSettings::UGlobalAppearanceSettings() {
    this->DefaultMinLOD = 1;
    this->CinematicModeForcedLOD = 0;
    this->PostProcessAnimBlueprintLODThreshold = 4;
    this->DismembermentBlockedRegions.AddDefaulted(1);
}


