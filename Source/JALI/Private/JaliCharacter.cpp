#include "JaliCharacter.h"
#include "JaliAnimationComponent.h"

AJaliCharacter::AJaliCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->JaliAnimation = CreateDefaultSubobject<UJaliAnimationComponent>(TEXT("JaliAnimation"));
}


