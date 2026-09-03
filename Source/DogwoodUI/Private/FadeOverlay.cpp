#include "FadeOverlay.h"

UFadeOverlay::UFadeOverlay() : UUserWidget(FObjectInitializer::Get()) {
    this->Overlay = NULL;
    this->Spinner = NULL;
    this->FadeOutSpinnerAnim = NULL;
    this->FadeInSpinnerAnim = NULL;
}

void UFadeOverlay::StopFade() {
}

bool UFadeOverlay::StartFade(float ToAlpha, float duration, FLinearColor Color, bool bHoldWhenFinished) {
    return false;
}

void UFadeOverlay::SetPaused(bool bInPaused) {
}

void UFadeOverlay::SetManualFade(float InFadeAmount, FLinearColor Color) {
}

void UFadeOverlay::OnSpinnerFadeOutFinished() {
}

bool UFadeOverlay::IsFaded() const {
    return false;
}

EFadeState UFadeOverlay::GetNextFadeState() const {
    return EFadeState::FadedIn;
}

EFadeState UFadeOverlay::GetCurrentFadeState() const {
    return EFadeState::FadedIn;
}

EFadeState UFadeOverlay::CheckFadeState() {
    return EFadeState::FadedIn;
}


