#include "FocusableComponent.h"

UFocusableComponent::UFocusableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FocusCategory = EFocusableObjectCategory::Default;
    this->bHighlightOwnerActor = true;
    this->bHighlightAttachedActors = true;
    this->bEmitsSound = false;
    this->LoadedNiagaraFocusSystem = NULL;
    this->SpawnedSoundParticle = NULL;
    this->HighlightType = EFocusHighlightType::Regular;
}

void UFocusableComponent::SetHighlight(EFocusHighlightType InType, bool bForce) {
}

EFocusHighlightType UFocusableComponent::GetHighlightType() const {
    return EFocusHighlightType::Disabled;
}

uint8 UFocusableComponent::GetFocusModeStencilValue(EFocusHighlightType NewHighlightType) {
    return 0;
}

bool UFocusableComponent::CanHighlight() {
    return false;
}


