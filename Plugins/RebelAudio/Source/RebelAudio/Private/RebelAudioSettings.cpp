#include "RebelAudioSettings.h"

URebelAudioSettings::URebelAudioSettings() {
    this->SettingsMasteringPresetData.AddDefaulted(4);
}

URebelAudioSettings* URebelAudioSettings::Get() {
    return NULL;
}


