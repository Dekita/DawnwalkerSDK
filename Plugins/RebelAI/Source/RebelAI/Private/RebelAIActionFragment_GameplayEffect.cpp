#include "RebelAIActionFragment_GameplayEffect.h"

FRebelAIActionFragment_GameplayEffect::FRebelAIActionFragment_GameplayEffect() {
    this->EffectClass = NULL;
    this->bApplyToTarget = false;
    this->bApplyOnlyIfTargetIsHit = false;
    this->bCausedByTarget = false;
    this->bRemoveOnActionComplete = false;
}

