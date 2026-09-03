#include "QuestNodeChangeWeather.h"

UQuestNodeChangeWeather::UQuestNodeChangeWeather() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->WeatherPreset = NULL;
    this->FogMinHeight = 0.00f;
    this->FogTargetHeight = 0.00f;
    this->BlendTime = 30.00f;
}


