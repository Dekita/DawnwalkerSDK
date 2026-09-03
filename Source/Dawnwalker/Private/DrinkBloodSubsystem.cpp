#include "DrinkBloodSubsystem.h"
#include "Templates/SubclassOf.h"

UDrinkBloodSubsystem::UDrinkBloodSubsystem() {
    this->LoadedBloodReplenishEffectClass = NULL;
    this->LoadedBloodReplenishDurationEffectClass = NULL;
}

void UDrinkBloodSubsystem::TryPlayPostBloodDrinkingCreatureDialogue(const FName& CreatureType) {
}

void UDrinkBloodSubsystem::TriggerBloodDrinkingInteraction() {
}

void UDrinkBloodSubsystem::ReplenishBlood(AActor* Victim, const float InAmount, const float InDuration) const {
}

void UDrinkBloodSubsystem::OnInnocentKill() {
}

void UDrinkBloodSubsystem::OnDrinkingNotInProgress(AActor* Victim) {
}

void UDrinkBloodSubsystem::OnDrinkingInProgress(AActor* Victim) {
}

void UDrinkBloodSubsystem::NotifyBloodDrinkingStopped(AActor* Actor) {
}

void UDrinkBloodSubsystem::NotifyBloodDrinkingStarted(AActor* Actor) {
}

void UDrinkBloodSubsystem::NotifyBloodDrinkingInitialized(AActor* Actor) {
}

bool UDrinkBloodSubsystem::IsDialogueOnCooldown(const FPostDrinkBloodDialogueData& DialogueData) const {
    return false;
}

TSubclassOf<UGameplayEffect> UDrinkBloodSubsystem::GetPostBloodDrinkingEffect(ECreatureCategoryType Type) const {
    return NULL;
}

float UDrinkBloodSubsystem::GetInputHoldTimeout() const {
    return 0.0f;
}

float UDrinkBloodSubsystem::GetEscapeChance(const AActor* Victim) const {
    return 0.0f;
}

AActor* UDrinkBloodSubsystem::GetCurrentlyDrinkedVictim() const {
    return NULL;
}


