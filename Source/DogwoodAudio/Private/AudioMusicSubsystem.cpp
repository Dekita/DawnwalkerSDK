#include "AudioMusicSubsystem.h"

UAudioMusicSubsystem::UAudioMusicSubsystem() {
    this->MusicDataAsset = NULL;
}

bool UAudioMusicSubsystem::ShouldPostExplorationMacroState() const {
    return false;
}

void UAudioMusicSubsystem::SetMacroMusicState(FGameplayTag MusicState) {
}

void UAudioMusicSubsystem::ReplaceExplicitMusicState(FGameplayTag MusicStateTag) {
}

void UAudioMusicSubsystem::PushExplicitMusicState(FGameplayTag MusicState) {
}

FGameplayTag UAudioMusicSubsystem::PopExplicitMusicState() {
    return FGameplayTag{};
}

FGameplayTag UAudioMusicSubsystem::PeekExplicitMusicState() const {
    return FGameplayTag{};
}

void UAudioMusicSubsystem::OnDialogueStarted(UCinematicDialogue* Dialogue, const bool bWasStateKept) {
}

bool UAudioMusicSubsystem::IsMusicInitialized() const {
    return false;
}

bool UAudioMusicSubsystem::IsMainCharacterInMusicRelevantVolume(FGameplayTag VolumeTag) {
    return false;
}

FGameplayTag UAudioMusicSubsystem::GetMacroMusicState() const {
    return FGameplayTag{};
}

bool UAudioMusicSubsystem::ContainsExplicitState(FGameplayTag MusicState) const {
    return false;
}

void UAudioMusicSubsystem::ClearVolumeStack() {
}

