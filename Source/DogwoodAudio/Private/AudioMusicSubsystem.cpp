#include "AudioMusicSubsystem.h"

UAudioMusicSubsystem::UAudioMusicSubsystem() {
    this->MusicDataAsset = NULL;
    this->InitializationEventCache = NULL;
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

void UAudioMusicSubsystem::PostMusicEvent(TSoftObjectPtr<UAkAudioEvent> Event, bool IsInitializationEvent) {
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

UAkStateValue* UAudioMusicSubsystem::GetMusicStateByCombatFaction(FGameplayTag FactionId, FGameplayTag NPCMusicOverride) {
    return NULL;
}

FGameplayTag UAudioMusicSubsystem::GetMacroMusicState() const {
    return FGameplayTag{};
}

bool UAudioMusicSubsystem::ContainsExplicitState(FGameplayTag MusicState) const {
    return false;
}

void UAudioMusicSubsystem::ClearVolumeStack() {
}


