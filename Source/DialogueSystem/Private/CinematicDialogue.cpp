#include "CinematicDialogue.h"

UCinematicDialogue::UCinematicDialogue() {
    this->PlaybackMode = EDialoguePlaybackMode::Cinematic;
    this->bBindByVoiceTag = false;
    this->bPlayWhenGamePaused = false;
    this->bTeleportCharactersToSlotsWhenFinished = true;
    this->bSpawnRestrictedArea = true;
    this->bLockAllNodes = false;
    this->RestrictedArea = NULL;
    this->PlaybackRootOverride = NULL;
    this->bPerformFadeOutOnStart = true;
    this->StartFadeOutTime = 1.00f;
    this->bPerformFadeInOnStart = true;
    this->StartFadeInTime = 1.00f;
    this->bFreezeFrameOnEnd = false;
    this->bPerformFadeOutOnEnd = true;
    this->EndFadeOutTime = 1.00f;
    this->bPerformFadeInOnEnd = true;
    this->EndFadeInTime = 1.00f;
    this->AudioPreset = NULL;
    this->DefaultDialogueStartAkEvent = NULL;
    this->DefaultDialogueEndAkEvent = NULL;
    this->DefaultSpeakerLineStartAkEvent = NULL;
    this->DefaultSpeakerLineEndAkEvent = NULL;
    this->bIsInterruptible = false;
}

void UCinematicDialogue::TrySkipResponseNode() const {
}

void UCinematicDialogue::TrySkipResponseLine() const {
}

void UCinematicDialogue::TrySkipDialogue() {
}

void UCinematicDialogue::TrySkip() const {
}

ACinematicCharacter* UCinematicDialogue::GetSpeakingCharacter() const {
    return NULL;
}

FGameplayTag UCinematicDialogue::GetCurrentSpeakerTag() const {
    return FGameplayTag{};
}

FText UCinematicDialogue::GetCharacterNameByTag(const FGameplayTag& Tag) const {
    return FText::GetEmpty();
}

UCinematicNode_Response* UCinematicDialogue::GetActiveResponseNode() const {
    return NULL;
}

UCinematicNode_Choice* UCinematicDialogue::GetActiveChoiceNode() const {
    return NULL;
}


