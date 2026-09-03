#include "SimpleCharacter.h"
#include "InteractableComponent.h"
#include "MotionWarpingComponent.h"
#include "AudioSimpleCharacterBaseComponent.h"

ASimpleCharacter::ASimpleCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StubToRunAwayFrom = NULL;
    this->RunAwayMovementProfile = NULL;
    this->RunAwayQuery = NULL;
    this->RunAwayQueryFallback = NULL;
    this->MinimumScareTime = 5.00f;
    this->InteractableComponent = CreateDefaultSubobject<UInteractableComponent>(TEXT("Interactable Component"));
    this->AudioSimpleCharacterComponent = CreateDefaultSubobject<UAudioSimpleCharacterBaseComponent>(TEXT("Audio Simple Character Base Component"));
    this->MotionWarpingComponent = CreateDefaultSubobject<UMotionWarpingComponent>(TEXT("MotionWarpingComponent"));
    this->UsedDefinition = NULL;
    this->InteractableComponent->SetupAttachment(RootComponent);
}

void ASimpleCharacter::OnInteractionStarted() {
}

FText ASimpleCharacter::GetInteractionPrompt_Implementation() const {
    return FText::GetEmpty();
}

FVector ASimpleCharacter::GetInteractionLocation_Implementation() const {
    return FVector{};
}

void ASimpleCharacter::EnableRagdoll() {
}


