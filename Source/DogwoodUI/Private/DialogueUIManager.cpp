#include "DialogueUIManager.h"

UDialogueUIManager::UDialogueUIManager() {
    this->ActiveDialogueWidget = NULL;
    this->BoundSystem = NULL;
}

void UDialogueUIManager::OnDialoguePlaybackStarted(UCinematicDialogue* Dialogue, bool bWasStateKept) {
}

void UDialogueUIManager::OnDialoguePlaybackFinished() {
}


