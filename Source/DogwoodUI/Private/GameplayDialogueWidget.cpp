#include "GameplayDialogueWidget.h"

UGameplayDialogueWidget::UGameplayDialogueWidget() {
}

bool UGameplayDialogueWidget::ShouldShowOverheadSubtitle(const ACinematicCharacter* Character, const UCinematicDialogue* Dialogue) const {
    return false;
}

EDialogueLineDisplayPosition UGameplayDialogueWidget::GetDialogueLineDisplayPositionForSpeaker(FGameplayTag SpeakerTag, const UCinematicDialogue* Dialogue) {
    return EDialogueLineDisplayPosition::Hidden;
}

void UGameplayDialogueWidget::CalculateAdditionalSubtitleOffsets() {
}


