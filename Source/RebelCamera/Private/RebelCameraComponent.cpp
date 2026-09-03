#include "RebelCameraComponent.h"
#include "Templates/SubclassOf.h"

URebelCameraComponent::URebelCameraComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void URebelCameraComponent::SetCameraType(ECameraType InType) {
}

FRebelCameraModeHandle URebelCameraComponent::PushDefaultExplorationCameraMode() {
    return FRebelCameraModeHandle{};
}

FRebelCameraModeHandle URebelCameraComponent::PushDefaultCombatCameraMode() {
    return FRebelCameraModeHandle{};
}

FRebelCameraModeHandle URebelCameraComponent::PushCameraModeFromSelector(const FRebelCameraModeSelector& InModeSelector, const FGameplayTagContainer& InTags) {
    return FRebelCameraModeHandle{};
}

FRebelCameraModeHandle URebelCameraComponent::PushCameraMode(TSubclassOf<URebelCameraMode> ModeClass) {
    return FRebelCameraModeHandle{};
}

bool URebelCameraComponent::PopDefaultExplorationCameraMode() {
    return false;
}

bool URebelCameraComponent::PopDefaultCombatCameraMode() {
    return false;
}

bool URebelCameraComponent::PopCameraMode(const FRebelCameraModeHandle& Handle) {
    return false;
}

ECameraType URebelCameraComponent::GetCameraType() const {
    return ECameraType::None;
}

URebelCameraComponent* URebelCameraComponent::FindRebelCameraComponent(const AActor* Actor) {
    return NULL;
}

URebelCameraComponent* URebelCameraComponent::FindPlayerRebelCamera(const UObject* WorldContextObj) {
    return NULL;
}


