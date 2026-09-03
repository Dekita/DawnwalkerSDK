#include "TraversalModVolume.h"

ATraversalModVolume::ATraversalModVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bGenerateOverlapEventsDuringLevelStreaming = true;
    this->bForceLedgeLookingDown = false;
    this->bDisableLedgeLookingDown = false;
    this->bFallingForcesClawRide = false;
    this->bForceEndClawRide = false;
}

void ATraversalModVolume::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ATraversalModVolume::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


