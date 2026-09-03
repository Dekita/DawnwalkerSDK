#include "WorldBorderVolume.h"

AWorldBorderVolume::AWorldBorderVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WorldBorderDefName = TEXT("Generic");
}

void AWorldBorderVolume::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AWorldBorderVolume::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

TArray<FName> AWorldBorderVolume::GetOptions() const {
    return TArray<FName>();
}


