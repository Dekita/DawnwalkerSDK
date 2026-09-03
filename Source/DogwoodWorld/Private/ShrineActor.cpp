#include "ShrineActor.h"
#include "InteractableComponent.h"

AShrineActor::AShrineActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShrineInteraction = CreateDefaultSubobject<UInteractableComponent>(TEXT("ShrineInteraction"));
    this->ShrineInteraction->SetupAttachment(RootComponent);
}

void AShrineActor::OnInteractionStarted() {
}

void AShrineActor::OnChapelFadeOut() {
}



