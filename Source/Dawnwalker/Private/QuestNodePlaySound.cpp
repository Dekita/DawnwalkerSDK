#include "QuestNodePlaySound.h"

UQuestNodePlaySound::UQuestNodePlaySound() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->VolumeMultiplier = 1.00f;
    this->AudioType = EAudioType::Music;
}


