#include "BloodDrinkableComponent.h"

UBloodDrinkableComponent::UBloodDrinkableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Anims = NULL;
    this->OwnerAbilitySystemComponent = NULL;
}

void UBloodDrinkableComponent::TryPlayReactionDialogue() {
}

void UBloodDrinkableComponent::PostKillingDrinking() {
}

FCreatureEntry UBloodDrinkableComponent::GetCreatureEntry() const {
    return FCreatureEntry{};
}

bool UBloodDrinkableComponent::CanApplyDrinkingEffect(const ADawnwalkerCharacterBase* InTargetCharacter, ECreatureCategoryType Type) const {
    return false;
}

void UBloodDrinkableComponent::ApplyDrinkingEffects(const ADawnwalkerCharacterBase* InTargetCharacter) {
}

void UBloodDrinkableComponent::ApplyDrinkingEffect(const ADawnwalkerCharacterBase* InTargetCharacter, ECreatureCategoryType Type) {
}


