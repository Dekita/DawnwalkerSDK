#include "DawnwalkerDialogueSubsystem.h"

UDawnwalkerDialogueSubsystem::UDawnwalkerDialogueSubsystem() {
    this->CinematicSubsystem = NULL;
}

void UDawnwalkerDialogueSubsystem::OnCombatStarted() {
}

void UDawnwalkerDialogueSubsystem::CinematicModeStarted(UCinematicDialogue* InDialogue, bool bWasStateKept) {
}

void UDawnwalkerDialogueSubsystem::CinematicModeFinished(UCinematicDialogue* InDialogue, bool bWasStateKept) {
}

void UDawnwalkerDialogueSubsystem::ChangeAppearanceForCinematicCharacter(ACinematicCharacter* Character, UAppearanceBase* Appearance, bool bCleanGarmentSlotsBeforeApplying) {
}


