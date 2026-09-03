#include "DogwoodSystemSettings.h"

UDogwoodSystemSettings::UDogwoodSystemSettings() {
    this->GlobalTimeInterpolationSpeed = 50.00f;
    this->TimeSegmentsPer12H = 8;
    this->DaytimeStartHour = 8;
    this->bShouldGameStartAtDaytimeStart = true;
    this->DefaultGameStartHour = 0;
    this->bUseNewTransitions = true;
    this->DayStartVideoName = TEXT("cs_global_sunrise_a");
    this->NightStartVideoName = TEXT("cs_global_moonrise_a");
}


