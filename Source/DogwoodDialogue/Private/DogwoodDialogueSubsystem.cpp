#include "DogwoodDialogueSubsystem.h"

UDogwoodDialogueSubsystem::UDogwoodDialogueSubsystem() {
    this->CachedVampireHungerFearIntensityRtpc = NULL;
    this->CachedVampireHungerFearIntensityBuildupEvent = NULL;
    this->CachedVampireHungerFearIntensityBuildupStopEvent = NULL;
    this->CachedVampireHungerDrainNPCEvent = NULL;
    this->CachedVampireHungerEffectIntensityCurve = NULL;
}

void UDogwoodDialogueSubsystem::OnNodePlaybackStarted(UCinematicNode* Node) {
}

void UDogwoodDialogueSubsystem::OnDialogueStarted() {
}

void UDogwoodDialogueSubsystem::OnDialoguePlaybackStarted(UCinematicDialogue* Dialogue, bool bWasStateKept) {
}

void UDogwoodDialogueSubsystem::OnDialogueFinished(UCinematicDialogue* Dialogue, const bool bKeepDialogueState) {
}

void UDogwoodDialogueSubsystem::OnChoiceSelected(FGuid ChoiceGuid, int32 ChoiceIndex, bool bWasForced) {
}


