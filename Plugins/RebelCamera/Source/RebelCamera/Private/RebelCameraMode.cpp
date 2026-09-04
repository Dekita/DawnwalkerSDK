#include "RebelCameraMode.h"

URebelCameraMode::URebelCameraMode() {
    this->Priority = 0;
    this->bPopRemovesFromStackWhenNotOnTop = false;
    this->bFreezeOtherCamerasDuringBlendIn = false;
    this->DefaultFieldOfView = 90.00f;
    this->ViewPitchMin = -89.00f;
    this->ViewPitchMax = 89.00f;
    this->ClampViewSpeed = 8.00f;
    this->bEnableCameraVerticalLag = false;
    this->bEnableCameraHorizontalLag = false;
    this->bUseCameraLagSubstepping = false;
    this->CameraVerticalLagSpeed = 0.00f;
    this->CameraHorizontalLagSpeed = 0.00f;
    this->CameraLagMaxTimeStep = 0.00f;
    this->CameraVerticalLagMaxDistance = 0.00f;
    this->CameraHorizontalLagMaxDistance = 0.00f;
    this->bApplyPostProcessing = false;
    this->PostProcessOrder = EPostProcessApplicationMode::AfterWorld;
}

AActor* URebelCameraMode::GetTargetActor() const {
    return NULL;
}

ECameraModeState URebelCameraMode::GetState() const {
    return ECameraModeState::BlendingIn;
}

FRotator URebelCameraMode::GetPivotRotation_Implementation(float DeltaTime) {
    return FRotator{};
}

FVector URebelCameraMode::GetPivotLocation_Implementation(float DeltaTime) {
    return FVector{};
}

float URebelCameraMode::GetFieldOfView_Implementation() {
    return 0.0f;
}

URebelCameraComponent* URebelCameraMode::GetCameraComponent() const {
    return NULL;
}


