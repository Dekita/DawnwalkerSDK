#include "InvestigationWidgetBase.h"

UInvestigationWidgetBase::UInvestigationWidgetBase() {
    this->SkipButton = NULL;
    this->ExitButton = NULL;
}

void UInvestigationWidgetBase::SkipCurrentDialogueLine() {
}

void UInvestigationWidgetBase::OnGameplayDialoguePlaybackStarted(UCinematicDialogue* Dialogue) {
}

void UInvestigationWidgetBase::OnGameplayDialoguePlaybackFinished(UCinematicDialogue* Dialogue) {
}


