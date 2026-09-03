#include "RebelAudioSettings.h"

URebelAudioSettings::URebelAudioSettings() {
    this->CustomVoEvents.AddDefaulted(32);
    this->SettingsMasteringPresetData.AddDefaulted(4);
}

URebelAudioSettings* URebelAudioSettings::Get() {
    return NULL;
}


