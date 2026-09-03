#include "DogwoodAudioLocalSettings.h"

UDogwoodAudioLocalSettings::UDogwoodAudioLocalSettings() {
    this->Preview_IsMainCharacter = false;
    this->Preview_FallbackToGlobalPost = false;
}

UDogwoodAudioLocalSettings* UDogwoodAudioLocalSettings::GetDogwoodAudioLocalSettings() {
    return NULL;
}


