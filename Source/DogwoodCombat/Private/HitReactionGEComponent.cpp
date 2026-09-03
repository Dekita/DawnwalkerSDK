#include "HitReactionGEComponent.h"

UHitReactionGEComponent::UHitReactionGEComponent() {
    this->HitDirection = EWeaponSwingDirection::None;
    this->bIsBlockable = false;
    this->ParryWindow = 0.00f;
}


