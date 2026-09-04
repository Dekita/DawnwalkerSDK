#include "CinematicSubsystem.h"

UCinematicSubsystem::UCinematicSubsystem() {
    this->ActiveDialogue = NULL;
    this->GarmentOffsetIdleTypes = NULL;
    this->GarmentOffsetMultipliers = NULL;
}

void UCinematicSubsystem::SkipAllResponses(const bool bCheatActive) {
}

bool UCinematicSubsystem::IsDialogueActive() const {
    return false;
}

bool UCinematicSubsystem::IsCurrentlySpeakingInGameplayDialogue(const ACinematicCharacter* Character) const {
    return false;
}

bool UCinematicSubsystem::IsChoiceUsed(const UCinematicNode_Choice* ChoiceNode, const FGuid& LineGuid) const {
    return false;
}

bool UCinematicSubsystem::IsCharacterPlayingInterruptibleDialogue(const ACinematicCharacter* Character) const {
    return false;
}

bool UCinematicSubsystem::IsCharacterInCinematicDialogueOrCutscene(const ACinematicCharacter* Character) const {
    return false;
}

bool UCinematicSubsystem::IsCharacterInAnyDialogue(const ACinematicCharacter* Character) const {
    return false;
}

UCinematicDialogue* UCinematicSubsystem::GetActiveDialogue() const {
    return NULL;
}

void UCinematicSubsystem::CancelGameplayDialoguesForCharacter(const ACinematicCharacter* Character, bool bOnlyInterruptable, int32 PriorityThreshold, const FGameplayTagContainer ExcludeVoiceSets) {
}


