#include "DelayedAnimatedBar.h"

UDelayedAnimatedBar::UDelayedAnimatedBar() : UUserWidget(FObjectInitializer::Get()) {
    this->FrontBar = NULL;
    this->BackgroundBar = NULL;
    this->CurrentlyAnimatedBar = NULL;
    this->AnimationSpeed = 2.00f;
    this->AnimationDelay = 0.40f;
    this->MinDeltaForAnimationDelay = 0.05f;
}

void UDelayedAnimatedBar::TryUpdateBars(const float& InDeltaTime) {
}

void UDelayedAnimatedBar::SetPercent(const float& Value) {
}

void UDelayedAnimatedBar::ResetInitialization() {
}

void UDelayedAnimatedBar::InitializeBarValueNoAnimation(const float& Value) {
}


