#include "CinematicLights.h"

ACinematicLights::ACinematicLights(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDisableShadows = false;
}

bool ACinematicLights::ShouldUseStrongestNearbyLightPropertiesForKeyLight() const {
    return false;
}

void ACinematicLights::SetupLight(ULightComponent* Light) {
}

bool ACinematicLights::HasStrongestNearbyLight() const {
    return false;
}

ULightComponent* ACinematicLights::GetStrongestNearbyLightComponent() const {
    return NULL;
}

float ACinematicLights::GetStrongestLightAngle() const {
    return 0.0f;
}

float ACinematicLights::CalculateKeyLightIntensity() const {
    return 0.0f;
}

float ACinematicLights::CalculateDirectionalLightIntensity() const {
    return 0.0f;
}

float ACinematicLights::CalculateDirectionalLightAngle() const {
    return 0.0f;
}


