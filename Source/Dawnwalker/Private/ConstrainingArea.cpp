#include "ConstrainingArea.h"
#include "Components/CapsuleComponent.h"

AConstrainingArea::AConstrainingArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bGenerateOverlapEventsDuringLevelStreaming = true;
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComp"));
    this->CapsuleComp = (UCapsuleComponent*)RootComponent;
    this->PenaltyEffectClass = NULL;
    this->bActivateOnBeginPlay = true;
    this->bIsActive = false;
}

void AConstrainingArea::SetActive(bool bActive) {
}


