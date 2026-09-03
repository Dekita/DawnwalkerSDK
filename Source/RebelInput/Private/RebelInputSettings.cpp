#include "RebelInputSettings.h"

URebelInputSettings::URebelInputSettings() {
    this->RebindableMappingContexts.AddDefaulted(9);
    this->GamepadPresets.AddDefaulted(2);
}

URebelInputSettings* URebelInputSettings::Get() {
    return NULL;
}


