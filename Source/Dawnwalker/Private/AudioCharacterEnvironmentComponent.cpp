#include "AudioCharacterEnvironmentComponent.h"

UAudioCharacterEnvironmentComponent::UAudioCharacterEnvironmentComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
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

void UAudioCharacterEnvironmentComponent::OnPlayerFormChanged(EPlayerFormState NewState) {
}

void UAudioCharacterEnvironmentComponent::OnCombatFocusStarted() {
}

void UAudioCharacterEnvironmentComponent::OnCombatFocusEnded() {
}

