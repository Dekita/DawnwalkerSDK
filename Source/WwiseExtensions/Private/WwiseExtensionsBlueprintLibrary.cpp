#include "WwiseExtensionsBlueprintLibrary.h"

UWwiseExtensionsBlueprintLibrary::UWwiseExtensionsBlueprintLibrary() {
}

void UWwiseExtensionsBlueprintLibrary::StopSoundByPlayingID(const int32 PlayingID, const int32 FadeTimeInMs) {
}

URWAudioComponent* UWwiseExtensionsBlueprintLibrary::SpawnRWAudioComponentAtLocation(const UObject* WorldContextObject, FVector Location, FRotator orientation, bool bAutoDestroy, const URWAudioComponentSettingsPreset* AudioComponentSettings, const FString& DebugName) {
    return NULL;
}

void UWwiseExtensionsBlueprintLibrary::ResumeSoundByPlayingID(const int32 PlayingID, const int32 TransitionDurationInMs) {
}

void UWwiseExtensionsBlueprintLibrary::PauseSoundByPlayingID(const int32 PlayingID, const int32 TransitionDurationInMs) {
}

void UWwiseExtensionsBlueprintLibrary::GetPlayerTransform(FTransform& Transform, const UObject* WorldContextObject) {
}

void UWwiseExtensionsBlueprintLibrary::GetPlayerLocation(FVector& Location, const UObject* WorldContextObject) {
}

float UWwiseExtensionsBlueprintLibrary::GetOutdoorValue() {
    return 0.0f;
}

ARWAudioListener* UWwiseExtensionsBlueprintLibrary::GetListener(const UObject* WorldContextObject) {
    return NULL;
}

UGlobalAudioComponent* UWwiseExtensionsBlueprintLibrary::GetGlobalAudioComponent(const UObject* WorldContextObject) {
    return NULL;
}

URWAudioComponent* UWwiseExtensionsBlueprintLibrary::FindOrAddRWAudioComponent(AActor* Actor, bool& bOutNewComponentWasCreated) {
    return NULL;
}

void UWwiseExtensionsBlueprintLibrary::EnableObstructionOcclusion() {
}

void UWwiseExtensionsBlueprintLibrary::DisableObstructionOcclusion() {
}

URWAudioComponent* UWwiseExtensionsBlueprintLibrary::AttachRWAudioComponent(USceneComponent* AttachToComponent, FName AttachPointName, const FVector& RelativeLocation, bool& bOutNewComponentWasCreated) {
    return NULL;
}


