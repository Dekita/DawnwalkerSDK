#include "TransitionOverride.h"

FTransitionOverride::FTransitionOverride() {
    this->bOverrideFreezeFrame = false;
    this->bFreezeFrame = false;
    this->bOverrideFadeOut = false;
    this->bPerformFadeOut = false;
    this->FadeOutTime = 0.00f;
    this->bOverrideFadeIn = false;
    this->bPerformFadeIn = false;
    this->FadeInTime = 0.00f;
}

