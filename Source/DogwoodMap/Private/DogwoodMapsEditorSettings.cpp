#include "DogwoodMapsEditorSettings.h"

UDogwoodMapsEditorSettings::UDogwoodMapsEditorSettings() {
    this->DebugShowAllMappins = false;
    this->DrawPathToTrackedMappins = false;
}

bool UDogwoodMapsEditorSettings::ShouldDisplayMappinDebugInfo() {
    return false;
}


