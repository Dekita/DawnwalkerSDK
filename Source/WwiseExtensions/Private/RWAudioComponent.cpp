#include "RWAudioComponent.h"

URWAudioComponent::URWAudioComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseReverbVolumes = false;
    this->bCanBeVirtualised = true;
    this->bObstructionEnabled = false;
    this->ObstructionComplexity = EObstructionComplexity::SingleEmitterRay;
    this->ReverbType = EReverbType::AcousticsReverb;
    this->DopplerScale = 0.00f;
}

void URWAudioComponent::StopSound(const int32 PlayingID, const int32 FadeTimeInMs) {
}

void URWAudioComponent::StopAll(const int32 FadeTimeInMs) {
}

void URWAudioComponent::SetOverrideTransformOff() {
}

void URWAudioComponent::SetOverrideTransform(const FTransform& OverrideTransform) {
}

void URWAudioComponent::SetAudioSwitch(const UAkSwitchValue* SwitchValue) {
}

void URWAudioComponent::SetAudioRTPC(const UAkRtpc* RTPCValue, const float Value, const int32 InterpolationTimeInMs) {
}

void URWAudioComponent::SeekInSound(const int32 PlayingID, const float PercentPosition) {
}

void URWAudioComponent::ResumeSound(const int32 PlayingID, const int32 TransitionDuration) {
}

void URWAudioComponent::ResumeAll(const int32 TransitionDuration) {
}

void URWAudioComponent::PostAudioTrigger(const UAkTrigger* TriggerValue) {
}

int32 URWAudioComponent::PostAudioEvent(UAkAudioEvent* AkEvent) {
    return 0;
}

void URWAudioComponent::PauseSound(const int32 PlayingID, const int32 TransitionDuration) {
}

void URWAudioComponent::PauseAll(const int32 TransitionDuration) {
}

bool URWAudioComponent::IsPlaying() const {
    return false;
}

FTransform URWAudioComponent::GetEmitterTransform() {
    return FTransform{};
}

void URWAudioComponent::ApplyAudioComponentSettingsPreset(const URWAudioComponentSettingsPreset* SettingsPreset) {
}


