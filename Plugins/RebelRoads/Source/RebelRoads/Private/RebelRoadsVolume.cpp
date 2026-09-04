#include "RebelRoadsVolume.h"

ARebelRoadsVolume::ARebelRoadsVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mode = ERebelRoadsUseMode::Enable;
}

void ARebelRoadsVolume::OnBeginOverlap(UPrimitiveComponent* InOverlappedComponent, AActor* InOtherActor, UPrimitiveComponent* InOtherComp, int32 InOtherBodyIndex, bool bFromSweep, const FHitResult& InSweepResult) {
}


