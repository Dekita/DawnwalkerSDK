#include "ChatArea.h"
#include "Components/BoxComponent.h"

AChatArea::AChatArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("ChatAreaCollisionComp"));
    this->AreaComponent = (UBoxComponent*)RootComponent;
    this->ActivationDistance = 800.00f;
    this->bActorsMustBeInActionPoints = false;
    this->PlayingDialogueInstance = NULL;
}


