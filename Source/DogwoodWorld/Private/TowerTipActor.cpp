#include "TowerTipActor.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "BigObjectInvestigationComponent.h"
#include "InteractableComponent.h"

ATowerTipActor::ATowerTipActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->WarpTarget = CreateDefaultSubobject<USceneComponent>(TEXT("WarpTarget"));
    this->InvestigationComponent = CreateDefaultSubobject<UBigObjectInvestigationComponent>(TEXT("InvestigationComponent"));
    this->InteractableComponent = CreateDefaultSubobject<UInteractableComponent>(TEXT("Interactable"));
    this->State = ETowerState::Default;
    this->ScoutAbilityClass = NULL;
    this->ControlledCharacter = NULL;
    this->InvestigationStreamingInnerVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("InvestigationStreamingInnerVolume"));
    this->InvestigationStreamingOuterVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("InvestigationStreamingOuterVolume"));
    this->TimeSystem = NULL;
    this->InteractableComponent->SetupAttachment(RootComponent);
    this->InvestigationComponent->SetupAttachment(RootComponent);
    this->InvestigationStreamingInnerVolume->SetupAttachment(RootComponent);
    this->InvestigationStreamingOuterVolume->SetupAttachment(RootComponent);
    this->WarpTarget->SetupAttachment(RootComponent);
}



void ATowerTipActor::OnInvestigationStreamingOuterVolumeEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ATowerTipActor::OnInvestigationStreamingInnerVolumeBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ATowerTipActor::OnInteractionStarted() {
}


void ATowerTipActor::LeaveTower() {
}


void ATowerTipActor::EnterTower() {
}


