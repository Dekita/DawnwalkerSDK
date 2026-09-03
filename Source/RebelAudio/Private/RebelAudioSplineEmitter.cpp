#include "RebelAudioSplineEmitter.h"

ARebelAudioSplineEmitter::ARebelAudioSplineEmitter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FallbackSplineTubeRadius = 0.00f;
    this->SplineTubeRadius = 0.00f;
    this->EmitterComponent = NULL;
}

void ARebelAudioSplineEmitter::SetSplineTubeRadius(float Value) {
}

void ARebelAudioSplineEmitter::OnPlayerLeftProximity_Implementation() {
}

void ARebelAudioSplineEmitter::OnPlayerEnteredProximity_Implementation() {
}

bool ARebelAudioSplineEmitter::GetIsSplineActive() const {
    return false;
}

URWAudioComponent* ARebelAudioSplineEmitter::GetEmitterComponent() const {
    return NULL;
}


