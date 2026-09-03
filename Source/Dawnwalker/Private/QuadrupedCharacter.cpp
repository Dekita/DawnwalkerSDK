#include "QuadrupedCharacter.h"
#include "InteractableComponent.h"
#include "DawnwalkerNPCCombatComponent.h"

AQuadrupedCharacter::AQuadrupedCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InteractableComponent = CreateDefaultSubobject<UInteractableComponent>(TEXT("Interactable Component"));
    this->CombatComponent = CreateDefaultSubobject<UDawnwalkerNPCCombatComponent>(TEXT("Combat Component"));
    this->InteractableComponent->SetupAttachment(RootComponent);
}

void AQuadrupedCharacter::OnInteractionStarted() {
}

FText AQuadrupedCharacter::GetInteractionPrompt_Implementation() const {
    return FText::GetEmpty();
}

FVector AQuadrupedCharacter::GetInteractionLocation_Implementation() const {
    return FVector{};
}


