#include "DawnwalkerSettings.h"

UDawnwalkerSettings::UDawnwalkerSettings() {
    this->GlobalTimeInterpolationSpeed = 50.00f;
    this->AppearanceRandomizerTestDistance = 5000.00f;
    this->GameplayDialoguePlayRange = 5000.00f;
    this->PauseDialogueRange = 1000.00f;
    this->DialogueInterruptReactionInputName = TEXT("Dialogue_Interrupt");
    this->DialogueReturnReactionInputName = TEXT("Dialogue_Return");
}


