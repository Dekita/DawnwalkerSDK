#include "InteractableTimeSkipPoint.h"
#include "Components/SceneComponent.h"
#include "InteractableComponent.h"

AInteractableTimeSkipPoint::AInteractableTimeSkipPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->InteractableComponent = CreateDefaultSubobject<UInteractableComponent>(TEXT("Interactable"));
    this->InteractableComponent->SetupAttachment(RootComponent);
}

bool AInteractableTimeSkipPoint::IsTimeSkipEnabled() const {
    return false;
}


