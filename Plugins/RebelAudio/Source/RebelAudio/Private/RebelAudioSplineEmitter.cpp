#include "RebelAudioSplineEmitter.h"

ARebelAudioSplineEmitter::ARebelAudioSplineEmitter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FallbackSplineTubeRadius = 0.00f;
    this->SplineTubeRadius = 0.00f;
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

