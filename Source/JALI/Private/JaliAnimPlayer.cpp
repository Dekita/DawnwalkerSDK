#include "JaliAnimPlayer.h"
#include "Components/AudioComponent.h"

UJaliAnimPlayer::UJaliAnimPlayer() {
    this->CurrentAnimation = NULL;
    this->SoundWave = NULL;
    this->AudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("JaliAudio"));
}

void UJaliAnimPlayer::SetTime(float NewTime) {
}

void UJaliAnimPlayer::SetShouldHoldPose(bool bHoldPose) {
}

void UJaliAnimPlayer::SetCurrentSound(USoundWave* InSoundWave) {
}

void UJaliAnimPlayer::SetCurrentAnimation(UCurveTable* InCurveTable) {
}

void UJaliAnimPlayer::Resume() {
}

void UJaliAnimPlayer::Play(float StartTime) {
}

void UJaliAnimPlayer::Pause() {
}

bool UJaliAnimPlayer::IsPlaying() {
    return false;
}

float UJaliAnimPlayer::GetTime() {
    return 0.0f;
}

bool UJaliAnimPlayer::GetShouldHoldPose() {
    return false;
}

void UJaliAnimPlayer::GenerateAnimCurves(FJaliRuntimeAnimSettings AnimSettings, const FJaliAnimPlayerReadyDelegate& ReadyDelegate) {
}


