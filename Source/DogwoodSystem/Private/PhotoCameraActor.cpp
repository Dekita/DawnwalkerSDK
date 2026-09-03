#include "PhotoCameraActor.h"

APhotoCameraActor::APhotoCameraActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->State = EPhotoModeState::None;
    this->pitch = 0.00f;
    this->CapturedPlayerController = NULL;
    this->CapturedCameraComponent = NULL;
    this->PhotoModeMappingContext = NULL;
    this->CameraMoveAction = NULL;
    this->CameraVerticalMovementAction = NULL;
    this->CameraLookAction = NULL;
    this->CameraFOVAction = NULL;
    this->ReleaseCameraInputAction = NULL;
    this->EnhancedInput = NULL;
}

void APhotoCameraActor::ReleasePlayerInput() {
}

bool APhotoCameraActor::IsInCameraMode() const {
    return false;
}

bool APhotoCameraActor::HasCameraInput() const {
    return false;
}

void APhotoCameraActor::ExitPhotoCamera() {
}

void APhotoCameraActor::EnterPhotoCamera() {
}

void APhotoCameraActor::CapturePlayerInput() {
}


