#include "PersistentPerlinNoiseCameraShakePattern.h"

UPersistentPerlinNoiseCameraShakePattern::UPersistentPerlinNoiseCameraShakePattern(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LocationAmplitudeMultiplier = 1.00f;
    this->LocationFrequencyMultiplier = 1.00f;
    this->RotationAmplitudeMultiplier = 1.00f;
    this->RotationFrequencyMultiplier = 1.00f;
}


