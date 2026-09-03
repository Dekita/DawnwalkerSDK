#include "AbilityBasedQuestInteractionActor.h"

AAbilityBasedQuestInteractionActor::AAbilityBasedQuestInteractionActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActivationAbilityClass = NULL;
    this->EffectDuration = 5.00f;
}

void AAbilityBasedQuestInteractionActor::OnInteractionStateChanged() {
}

void AAbilityBasedQuestInteractionActor::OnAbilityInteractionStarted() {
}


FText AAbilityBasedQuestInteractionActor::GetInteractionPrompt() const {
    return FText::GetEmpty();
}

FGameplayTag AAbilityBasedQuestInteractionActor::GetGameplayCueTag() {
    return FGameplayTag{};
}

void AAbilityBasedQuestInteractionActor::ExecuteInteraction() {
}


