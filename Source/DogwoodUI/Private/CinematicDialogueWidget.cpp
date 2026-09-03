#include "CinematicDialogueWidget.h"

UCinematicDialogueWidget::UCinematicDialogueWidget() {
    this->bIsBackHandler = false;
    this->ChoiceWidget = NULL;
    this->SkipButtonWidget = NULL;
    this->DialogueHudPreset = NULL;
    this->TimeProgressionHudPreset = NULL;
    this->UIManager = NULL;
    this->CinematicSystem = NULL;
    this->HUDSystem = NULL;
    this->DisplayedDialogue = NULL;
    this->DisplayedChoice = NULL;
}




void UCinematicDialogueWidget::OnVoicePlaybackStarted(const UCinematicDialogue* Dialogue, const FCinematicResponseLine& ResponseLine, const FText& LocalizedText) {
}

void UCinematicDialogueWidget::OnVoicePlaybackFinished(const UCinematicDialogue* Dialogue, const FCinematicResponseLine& ResponseLine, const FText& LocalizedText) {
}

void UCinematicDialogueWidget::OnNodePlaybackStarted(UCinematicNode* Node) {
}

void UCinematicDialogueWidget::OnDebugVoicePlaybackStarted(const FText& LocalizedText) {
}

void UCinematicDialogueWidget::OnDebugVoicePlaybackEnded() {
}

void UCinematicDialogueWidget::OnChoicesRevealed(UCinematicNode_Choice* ChoiceNode) {
}

void UCinematicDialogueWidget::OnChoiceSelected(FGuid ChoiceGuid, int32 ChoiceIndex, bool bWasForced) {
}

void UCinematicDialogueWidget::OnChoiceClicked(const FGuid& Guid) {
}

UWidget* UCinematicDialogueWidget::NativeGetDesiredFocusTarget() const {
    return NULL;
}


void UCinematicDialogueWidget::HideCurrentLine() {
}

void UCinematicDialogueWidget::HandleSkipActionNative() {
}


