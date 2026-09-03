#include "InteractiveSceneObject.h"

AInteractiveSceneObject::AInteractiveSceneObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TriggerSource = EInteractiveSceneTriggerSource::Quest;
    this->LevelSequenceActor = NULL;
    this->bPerformFadeOutOnStart = true;
    this->StartFadeOutTime = 1.00f;
    this->bPerformFadeInOnStart = true;
    this->StartFadeInTime = 1.00f;
    this->bPerformFadeOutOnEnd = false;
    this->EndFadeOutTime = 1.00f;
    this->bPerformFadeInOnEnd = false;
    this->EndFadeInTime = 1.00f;
}

void AInteractiveSceneObject::OnInteractiveSceneStartedEvent_Implementation() {
}

void AInteractiveSceneObject::OnInteractiveScenePlaybackStarted() {
}

void AInteractiveSceneObject::OnInteractiveSceneCompletedEvent_Implementation() {
}

void AInteractiveSceneObject::OnInteractiveSceneCancelledEvent_Implementation() {
}

void AInteractiveSceneObject::OnCompletedInteractiveSceneNotification() {
}

void AInteractiveSceneObject::OnCancelledInteractiveSceneNotification() {
}




