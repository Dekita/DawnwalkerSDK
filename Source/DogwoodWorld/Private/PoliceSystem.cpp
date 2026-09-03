#include "PoliceSystem.h"

UPoliceSystem::UPoliceSystem() {
    this->ActiveChaseDialogueInstance = NULL;
    this->ImprisonedDialogueInstance = NULL;
}

EPilloryTeleportResult UPoliceSystem::TryTeleportToNearestPillory() {
    return EPilloryTeleportResult::Invalid;
}

void UPoliceSystem::TriggerCaughtDialogue(const FName& DialogueInput) {
}

bool UPoliceSystem::IsJailEnabled() const {
    return false;
}

bool UPoliceSystem::IsCaughtDialogueLoadingOrActive() const {
    return false;
}


