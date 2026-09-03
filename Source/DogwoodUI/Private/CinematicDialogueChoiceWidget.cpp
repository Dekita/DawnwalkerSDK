#include "CinematicDialogueChoiceWidget.h"

UCinematicDialogueChoiceWidget::UCinematicDialogueChoiceWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ChoiceContainer = NULL;
    this->ButtonGroup = NULL;
    this->DisplayedChoice = NULL;
    this->FirstUnlockedChoiceWidget = NULL;
    this->ChoiceButtonWidgetClass = NULL;
}

void UCinematicDialogueChoiceWidget::ShowChoices_Implementation(UCinematicNode_Choice* InChoiceNode) {
}

void UCinematicDialogueChoiceWidget::OnChoiceSelected_Implementation() {
}

void UCinematicDialogueChoiceWidget::OnChoiceGroupSelectionChanged(UCommonButtonBase* AssociatedButton, int32 ButtonIndex) {
}

void UCinematicDialogueChoiceWidget::OnChoiceButtonClicked(UCommonButtonBase* AssociatedButton, int32 ButtonIndex) {
}

TMap<FGuid, FCinematicChoiceLine> UCinematicDialogueChoiceWidget::GetChoiceLines() {
    return TMap<FGuid, FCinematicChoiceLine>();
}



