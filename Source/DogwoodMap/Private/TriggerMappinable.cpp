#include "TriggerMappinable.h"
#include "Components/SceneComponent.h"

ATriggerMappinable::ATriggerMappinable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultRoot"));
    this->DefaultRoot = (USceneComponent*)RootComponent;
}

void ATriggerMappinable::TryToSetMappinState(EMappinState State) {
}


