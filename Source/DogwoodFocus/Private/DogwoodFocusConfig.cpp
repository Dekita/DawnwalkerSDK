#include "DogwoodFocusConfig.h"

UDogwoodFocusConfig::UDogwoodFocusConfig() {
    this->InstaKillEffect = NULL;
    this->StaminaShieldBloodDrainDamageMultiplier = 0.01f;
    this->FirstSequenceSlowMotionValue = 0.00f;
    this->FirstSequenceSlowMotionDuration = 1.00f;
    this->FirstSequenceSlowMotionSmoothOutDuration = 0.10f;
    this->CollisionProfileName = TEXT("FocusAbilitySequencePositioner");
    this->SpotVisibilityProfileName = TEXT("FocusAbilitySequencePotentialSpot");
    this->SpotVisibilityRadius = 50.00f;
    this->GroundCheckPassPercentage = 1.00f;
    this->FocusTargetFilterClass = NULL;
    this->FocusTargetRange = 2000.00f;
    this->SwordAbilitiesRange = 1500.00f;
    this->VampireAbilitiesRange = 1500.00f;
    this->SpellAbilitiesRange = 1500.00f;
    this->CameraVerticalOffsetWhileTargetingHeads = 15.00f;
    this->CameraVerticalOffsetWhileTargetingHeadsNewFlow = 15.00f;
    this->CameraVerticalOffsetWhileTargetingNecrospeak = 30.00f;
    this->CameraVerticalOffsetWhileTargetingNecrospeakNewFlow = 30.00f;
    this->TeleportAfterSequenceQuery = NULL;
    this->AbilityTargetScreenWidthPercent = 30;
    this->AbilityTargetScreenHeightPercent = 30;
    this->ActionSlotsGainEffect = NULL;
    this->ActionSlotsRegenEffect = NULL;
    this->ActionsSlotsSetEffect = NULL;
    this->FocusChargeBaseRegenPerSecond = 0.02f;
    this->FocusChargeBaseActionRegen = 0.02f;
    this->bMultiplyActionRegenByChargeSlotMultiplier = false;
    this->ActionSlotsGainOnHit = 0.00f;
    this->ActionSlotsGainOnBlock = 0.00f;
    this->ActionSlotsGainOnParry = 0.00f;
    this->ChargedSlotMultiplier_1 = 0.00f;
    this->ChargedSlotMultiplier_2 = 0.00f;
    this->ChargedSlotMultiplier_3 = 0.00f;
    this->ChargedSlotMultiplier_4 = 0.00f;
    this->AbilityInputSlot1 = NULL;
    this->AbilityInputSlot2 = NULL;
}


