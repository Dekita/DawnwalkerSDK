#include "DogwoodAISettings.h"

UDogwoodAISettings::UDogwoodAISettings() {
    this->RequiredTimeBetweenAttacksToAvoidMashingPenalty = 1.50f;
    this->NumberOfAttacksRequiredForMashingPenalty = 4;
    this->StandardCapsuleRadius = 42.00f;
}

UDogwoodAISettings* UDogwoodAISettings::Get_BP() {
    return NULL;
}


