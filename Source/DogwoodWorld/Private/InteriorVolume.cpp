#include "InteriorVolume.h"

AInteriorVolume::AInteriorVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUsePostProcessSettingsFromCurve = false;
    this->TimeOfDay = 0.00f;
    this->SkyCreator = NULL;
    this->Priority = 0.00f;
    this->BlendRadius = 100.00f;
    this->BlendWeight = 1.00f;
    this->bEnabled = true;
    this->bUseOverrideSettings = false;
    this->InteriorConfig = NULL;
    this->KickOutTarget = NULL;
}

void AInteriorVolume::UpdatePostProcessSettings() {
}

void AInteriorVolume::SetTime(float InTime) {
}

void AInteriorVolume::SetPostProcessFromCurve() {
}

void AInteriorVolume::OnInteriorSubsystemReady() {
}

void AInteriorVolume::OnBrushEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AInteriorVolume::OnBrushBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AInteriorVolume::ApplyInteriorSettings() {
}


