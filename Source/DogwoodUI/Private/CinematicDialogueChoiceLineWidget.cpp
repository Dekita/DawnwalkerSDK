#include "CinematicDialogueChoiceLineWidget.h"

UCinematicDialogueChoiceLineWidget::UCinematicDialogueChoiceLineWidget() {
    this->FadeOutBeforeUrgeAnim = NULL;
    this->ForceSelectUrgeAnim = NULL;
}

void UCinematicDialogueChoiceLineWidget::SetupChoice_Implementation(UCinematicNode_Choice* ChoiceNode, const FCinematicChoiceLine& InLine) {
}

void UCinematicDialogueChoiceLineWidget::RestoreChoice_Implementation(const FChoiceReplacementData& InData, const FCinematicChoiceLine& OriginalLine) {
}

void UCinematicDialogueChoiceLineWidget::ReplaceChoice_Implementation(const FChoiceReplacementData& InData, const FCinematicChoiceLine& ReplacingLine) {
}

void UCinematicDialogueChoiceLineWidget::InitializeChoice_Implementation() {
}


