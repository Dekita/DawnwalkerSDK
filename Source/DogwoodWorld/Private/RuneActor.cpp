#include "RuneActor.h"
#include "Components/SceneComponent.h"
#include "InteractableComponent.h"

ARuneActor::ARuneActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->CurrentState = ERuneState::Active;
    this->InteractableComponent = CreateDefaultSubobject<UInteractableComponent>(TEXT("interaction"));
    this->InteractableComponent->SetupAttachment(RootComponent);
}

void ARuneActor::RuneDispelled_Implementation() {
}

void ARuneActor::OnInteractedWith() {
}

void ARuneActor::OnEnteredFocus() {
}

bool ARuneActor::CanBeDispelled() const {
    return false;
}


