#include "BTTask_GenerateLocationOnRoads.h"

UBTTask_GenerateLocationOnRoads::UBTTask_GenerateLocationOnRoads() {
    this->NodeName = TEXT("Generate location on roads");
    this->Mode = EGenerateLocationOnRoads_Mode::Random;
    this->bZoneFromContext = false;
    this->MinDistance = 50.00f;
}


