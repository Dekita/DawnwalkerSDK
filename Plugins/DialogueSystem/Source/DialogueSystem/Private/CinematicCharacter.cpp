#include "CinematicCharacter.h"
#include "QuestComponent.h"

ACinematicCharacter::ACinematicCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->QuestComponent = CreateDefaultSubobject<UQuestComponent>(TEXT("QuestComponent"));
    this->bCinematicMode = false;
    this->bVisibleInCinematic = true;
    this->bRandomizedChatter = true;
}

void ACinematicCharacter::UnfreezeClothSimulation() {
}

void ACinematicCharacter::SetCinematicMode(const bool bActive) {
}

void ACinematicCharacter::ResponseStartedHandler(const UCinematicDialogue* Dialogue, bool bIsSpeaker) {
}

void ACinematicCharacter::ResponseFinishedHandler(const UCinematicDialogue* Dialogue, bool bIsSpeaker) {
}

void ACinematicCharacter::ResetHairSimulation() {
}

void ACinematicCharacter::ResetClothSimulation() {
}

void ACinematicCharacter::ResetClothAndHairSimulation() {
}

void ACinematicCharacter::PreNodePlaybackStaredHandler(UCinematicNode* Node) {
}

void ACinematicCharacter::PostNodePlaybackStaredHandler(UCinematicNode* Node) {
}


void ACinematicCharacter::OnGameplayDialoguePlaybackStarted(UCinematicDialogue* Dialogue) {
}

void ACinematicCharacter::OnGameplayDialoguePlaybackFinished(UCinematicDialogue* Dialogue) {
}

void ACinematicCharacter::OnDialoguePlaybackStarted(UCinematicDialogue* Dialogue, bool bWasStateKept) {
}

void ACinematicCharacter::OnDialoguePlaybackFinished(UCinematicDialogue* Dialogue, const bool bKeepDialogueState) {
}

void ACinematicCharacter::NodePlaybackFinishedHandler(UCinematicNode* Node) {
}

bool ACinematicCharacter::IsASequencerActor() const {
    return false;
}

FText ACinematicCharacter::GetCharacterDisplayName() const {
    return FText::GetEmpty();
}

void ACinematicCharacter::FreezeClothSimulation() {
}


