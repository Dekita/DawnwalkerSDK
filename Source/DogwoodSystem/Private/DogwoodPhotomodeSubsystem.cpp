#include "DogwoodPhotomodeSubsystem.h"

UDogwoodPhotomodeSubsystem::UDogwoodPhotomodeSubsystem() {
    this->PhotoCamera = NULL;
}

bool UDogwoodPhotomodeSubsystem::ShouldPhotomodePauseGame() {
    return false;
}

void UDogwoodPhotomodeSubsystem::SetInvestigationInProgress(bool bValue) {
}

bool UDogwoodPhotomodeSubsystem::IsPhotoModeEnabled() {
    return false;
}

bool UDogwoodPhotomodeSubsystem::IsPhotomodeActive() const {
    return false;
}

float UDogwoodPhotomodeSubsystem::GetPhotomodeCameraMovementSpeed() {
    return 0.0f;
}

float UDogwoodPhotomodeSubsystem::GetPhotomodeCameraMaxDistance() {
    return 0.0f;
}

UDogwoodPhotomodeSubsystem* UDogwoodPhotomodeSubsystem::Get(const UObject* WorldContextObject) {
    return NULL;
}

void UDogwoodPhotomodeSubsystem::DeactivatePhotomode() {
}

void UDogwoodPhotomodeSubsystem::CapturePlayerInput() {
}

bool UDogwoodPhotomodeSubsystem::CanActivatePhotomode() const {
    return false;
}

void UDogwoodPhotomodeSubsystem::ActivatePhotomode() {
}


