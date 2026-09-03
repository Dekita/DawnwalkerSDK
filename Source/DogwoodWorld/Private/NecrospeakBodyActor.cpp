#include "NecrospeakBodyActor.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "InteractableComponent.h"

ADEPRECATED_NecrospeakBodyActor::ADEPRECATED_NecrospeakBodyActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->CurrentState = ENecrospeakState::Disabled;
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    this->SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
    this->InteractableComponent = CreateDefaultSubobject<UInteractableComponent>(TEXT("interaction"));
    this->NecrospeakVFX = NULL;
    this->SpawnedNecrospeakVFX = NULL;
    this->InteractableComponent->SetupAttachment(RootComponent);
    this->SkeletalMeshComponent->SetupAttachment(RootComponent);
    this->StaticMeshComponent->SetupAttachment(RootComponent);
}

void ADEPRECATED_NecrospeakBodyActor::OnNecrospeakEnabled_Implementation() {
}

void ADEPRECATED_NecrospeakBodyActor::OnNecrospeakDisabled_Implementation() {
}

void ADEPRECATED_NecrospeakBodyActor::OnInteractedWith() {
}

void ADEPRECATED_NecrospeakBodyActor::OnEnteredFocus() {
}

void ADEPRECATED_NecrospeakBodyActor::DeactivateVFX() {
}

void ADEPRECATED_NecrospeakBodyActor::ActivateVFX() {
}


