#include "FocusableSmellTrail.h"
#include "Components/BoxComponent.h"
#include "Components/SplineComponent.h"

AFocusableSmellTrail::AFocusableSmellTrail(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FocusDetectorComponent = NULL;
    this->Spline = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
    this->SplineBoundingBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Spline Bounding Box"));
    this->ParticleSystem = NULL;
    this->SplineBoundingBox->SetupAttachment(Spline);
}

void AFocusableSmellTrail::OnLeftFocus() {
}

void AFocusableSmellTrail::OnEnteredFocus() {
}


