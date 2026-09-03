#include "AudioCharacterFoleyComponent.h"

UAudioCharacterFoleyComponent::UAudioCharacterFoleyComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AppearanceData = NULL;
    this->FoleyAudioTarget = NULL;
}

void UAudioCharacterFoleyComponent::OnAppereanceGarmentMapRebuilt(UAppearanceComponent* AppereanceComponent) {
}


