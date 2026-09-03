#include "CharacterBodyPreset.h"

UCharacterBodyPreset::UCharacterBodyPreset() {
    this->bOverrideBodyAnimInstance = false;
    this->BodyOverrideAnimInstanceClass = NULL;
    this->bOverrideHeadAnimInstance = false;
    this->HeadOverrideAnimInstanceClass = NULL;
    this->bOverrideCapsuleSize = false;
    this->CapsuleHalfHeight = 96.00f;
    this->CinematicCapsuleHalfHeight = 96.00f;
    this->CapsuleRadius = 42.00f;
    this->bExtraMeshZOffset = false;
    this->MeshZOffset = 0.00f;
    this->BodyScale = 1.00f;
    this->CinematicBodyScale = 1.00f;
}


