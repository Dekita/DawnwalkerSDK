#include "AstralSourceActor.h"

AAstralSourceActor::AAstralSourceActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpawnTrailFX = NULL;
    this->SpawnHitFX = NULL;
    this->SpawnVfxDuration = 0.80f;
    this->SpawnVfxBulgeFactor = 1.50f;
}

void AAstralSourceActor::StopWaiting() {
}

void AAstralSourceActor::StartWaiting() {
}


