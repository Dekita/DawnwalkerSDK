#include "JaliAnimationComponent.h"
#include "JaliAnimPlayer.h"

UJaliAnimationComponent::UJaliAnimationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AnimPlayer = CreateDefaultSubobject<UJaliAnimPlayer>(TEXT("JaliAnimPlayer"));
}

UJaliAnimPlayer* UJaliAnimationComponent::GetAnimPlayer() {
    return NULL;
}


