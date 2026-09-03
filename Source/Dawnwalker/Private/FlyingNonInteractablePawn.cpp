#include "FlyingNonInteractablePawn.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"

AFlyingNonInteractablePawn::AFlyingNonInteractablePawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->Mesh = (USkeletalMeshComponent*)RootComponent;
    this->FlyAwayTrigger = CreateDefaultSubobject<USphereComponent>(TEXT("FlyAwayTrigger"));
    this->FlyAwayMontage = NULL;
    this->FlyAwayTrigger->SetupAttachment(RootComponent);
}

void AFlyingNonInteractablePawn::OnTriggerOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bBFromSweep, const FHitResult& SweepResult) {
}


