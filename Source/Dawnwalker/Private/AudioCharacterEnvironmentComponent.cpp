#include "AudioCharacterEnvironmentComponent.h"

UAudioCharacterEnvironmentComponent::UAudioCharacterEnvironmentComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CharacterVampireStateValue = NULL;
    this->CharacterDefaultStateValue = NULL;
    this->AmbientMasksDataAsset = NULL;
    this->OwningPlayerCharacter = NULL;
}

void UAudioCharacterEnvironmentComponent::SetListenerLeftRoom(AActor* OverlappedActor) {
}

void UAudioCharacterEnvironmentComponent::SetListenerEnteredRoom(AActor* OverlappedActor) {
}

void UAudioCharacterEnvironmentComponent::SetLastInteriorPositions(TArray<FTransform> Positions) {
}

void UAudioCharacterEnvironmentComponent::SetCharacterLeftRoom(AActor* OverlappedActor) {
}

void UAudioCharacterEnvironmentComponent::SetCharacterEnteredRoom(AActor* OverlappedActor) {
}

float UAudioCharacterEnvironmentComponent::SampleCustomMaskAtLocation(const UBiomesMaskAsset* Mask, FVector2D Location) {
    return 0.0f;
}

void UAudioCharacterEnvironmentComponent::OnPlayerFormChanged(EPlayerFormState NewState) {
}

void UAudioCharacterEnvironmentComponent::OnCombatFocusStarted() {
}

void UAudioCharacterEnvironmentComponent::OnCombatFocusEnded() {
}


