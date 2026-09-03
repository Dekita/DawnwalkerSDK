#include "CityAreaVolume.h"

ACityAreaVolume::ACityAreaVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bWithinCityWalls = false;
}

void ACityAreaVolume::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ACityAreaVolume::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


