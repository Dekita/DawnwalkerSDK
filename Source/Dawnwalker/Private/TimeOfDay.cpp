#include "TimeOfDay.h"

ATimeOfDay::ATimeOfDay(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void ATimeOfDay::SetViewDistance(UExponentialHeightFogComponent* FogComponent, float ViewDistance) {
}

void ATimeOfDay::SetFogDistance(UExponentialHeightFogComponent* FogComponent, float FogNearFadeInDistance) {
}

void ATimeOfDay::SetCloudShadowStrength(UDirectionalLightComponent* DirectionalLightComponent, float Strength) {
}

void ATimeOfDay::SetCloudShadowOnSurfaceStrength(UDirectionalLightComponent* DirectionalLightComponent, float Strength) {
}

void ATimeOfDay::SetCloudShadowOnAtmosphereStrength(UDirectionalLightComponent* DirectionalLightComponent, float Strength) {
}

void ATimeOfDay::SetCastCloudsShadows(UDirectionalLightComponent* DirectionalLightComponent, bool bShadow) {
}






float ATimeOfDay::GetCharacterDirectionalTemperatureOffset() {
    return 0.0f;
}

float ATimeOfDay::GetCharacterDirectionalIntensityMultiplier() {
    return 0.0f;
}




