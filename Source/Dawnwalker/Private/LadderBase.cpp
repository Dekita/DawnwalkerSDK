#include "LadderBase.h"
#include "Components/BoxComponent.h"
#include "NavLinkComponent.h"
#include "LadderComponentBase.h"

ALadderBase::ALadderBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<ULadderComponentBase>(TEXT("Ladder Component"));
    this->LadderComponent = (ULadderComponentBase*)RootComponent;
    this->StartTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("Start Trigger"));
    this->EndTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("End Trigger"));
    this->NavLink = CreateDefaultSubobject<UNavLinkComponent>(TEXT("FollowerNavLink"));
    this->EndTrigger->SetupAttachment(RootComponent);
    this->NavLink->SetupAttachment(RootComponent);
    this->StartTrigger->SetupAttachment(RootComponent);
}

void ALadderBase::OnLadderTriggerExit(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ALadderBase::OnLadderTriggerEntered(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


