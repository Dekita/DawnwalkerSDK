#include "DwWaterActor.h"

ADwWaterActor::ADwWaterActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InWaterTagApplicationDepth = 95.00f;
    this->NiagaraDataChannel = NULL;
}

void ADwWaterActor::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ADwWaterActor::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


