#include "ForcedSpawnVarsVolume.h"

AForcedSpawnVarsVolume::AForcedSpawnVarsVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bRelevantForLevelBounds = false;
    this->bEnableAutoLODGeneration = false;
    this->SpawnRangeNearInMeters = 0.00f;
    this->SpawnRangeFarInMeters = 0.00f;
}

void AForcedSpawnVarsVolume::OnEndOverlap(UPrimitiveComponent* InOverlappedComponent, AActor* InOtherActor, UPrimitiveComponent* InOtherComp, int32 InOtherBodyIndex) {
}

void AForcedSpawnVarsVolume::OnBeginOverlap(UPrimitiveComponent* InOverlappedComponent, AActor* InOtherActor, UPrimitiveComponent* InOtherComp, int32 InOtherBodyIndex, bool bFromSweep, const FHitResult& InSweepResult) {
}


