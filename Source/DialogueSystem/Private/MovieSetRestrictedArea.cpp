#include "MovieSetRestrictedArea.h"
#include "Components/SphereComponent.h"
#include "NavModifierComponent.h"

AMovieSetRestrictedArea::AMovieSetRestrictedArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SoftHideSphere"));
    this->SoftHideSphere = (USphereComponent*)RootComponent;
    this->HardHideSphere = CreateDefaultSubobject<USphereComponent>(TEXT("HardHideSphere"));
    this->NavModifier = CreateDefaultSubobject<UNavModifierComponent>(TEXT("NavModifier"));
    this->HardHideSphere->SetupAttachment(RootComponent);
}

void AMovieSetRestrictedArea::PostNodePlaybackStarted(UCinematicNode* Node) {
}

void AMovieSetRestrictedArea::OnSoftOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AMovieSetRestrictedArea::OnSoftOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AMovieSetRestrictedArea::OnHardOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AMovieSetRestrictedArea::OnHardOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


