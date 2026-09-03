#include "PlayerStorageActor.h"
#include "Components/SceneComponent.h"
#include "InteractableComponent.h"

APlayerStorageActor::APlayerStorageActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->InteractableComponent = CreateDefaultSubobject<UInteractableComponent>(TEXT("InteractableComponent"));
    this->InteractableComponent->SetupAttachment(RootComponent);
}



