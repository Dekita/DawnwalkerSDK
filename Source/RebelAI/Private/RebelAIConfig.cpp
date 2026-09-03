#include "RebelAIConfig.h"

URebelAIConfig::URebelAIConfig() {
    this->bCanAttackParry = true;
    this->bCanGetTicketWithoutPath = false;
    this->AttackParryCoverPercent = 0.50f;
    this->bCoenAttackAfterBlockTag = true;
    this->bCoenAttackAfterParryTag = true;
    this->bCoenAttackAfterHitTag = true;
    this->bCanBlock = false;
    this->bHideIndicatorWhenFarAway = true;
    this->bWantsRightPose = true;
    this->bLeftPoseEnabled = true;
    this->MovementGoalTolerance = 10.00f;
    this->bShowCombatBar = true;
    this->bShowStaminaBar = true;
    this->SoundConfig = NULL;
    this->bIgnoreGuardAreas = false;
    this->FallbackCombatGuardAreaRadius = 4000.00f;
    this->PersuadeIntruderToLeaveGuardAreaCombatDistanceModifier = 0.00f;
    this->bAlwaysKeepStandardTicket = false;
    this->BlockTicketWhenAttackedWithoutTicketTime = 2.00f;
    this->ChanceToPassStandardTicketToHelper = 0.50f;
    this->HealthThresholdForDecreasedCooldowns = 40.00f;
    this->MinOrbitWhenWithoutTicket = 400.00f;
    this->DistanceBetweenOrbitsWhenWithoutTicket = 125.00f;
    this->MaxAngleToPlayerWhenWithoutTicket = 60.00f;
    this->bMoveAround = false;
    this->FatigueStunDuration = 5.00f;
    this->FatigueStunLevel = 3;
    this->RandomStunDuration = 4.00f;
    this->RandomStunLevel = 3;
    this->bEnemyAllowsFinishers = true;
    this->BaseStaminaCostForDodge = 0.00f;
    this->FinishersHPPercentage = 0.10f;
    this->FinishersDistance = 180.00f;
    this->bCanMakeNoise = false;
    this->MinHelperTicketCooldown = 8.00f;
    this->MaxHelperTicketCooldown = 12.00f;
    this->MinHelperTicketCooldownWhenHealthIsLow = 4.00f;
    this->MaxHelperTicketCooldownWhenHealthIsLow = 6.00f;
    this->MinHelperRangedAttackCooldown = 10.00f;
    this->MaxHelperRangedAttackCooldown = 20.00f;
}

float URebelAIConfig::GetPlayrateForMontage(UObject* WorldContext, UAnimMontage* Montage, URebelAIStub* Stub) {
    return 0.0f;
}

float URebelAIConfig::GetLowHealthHelperTicketCooldownBasedOnCurrentDifficulty(URebelAIStub* Stub) {
    return 0.0f;
}

float URebelAIConfig::GetHelperTicketCooldownBasedOnCurrentDifficulty(URebelAIStub* Stub) {
    return 0.0f;
}

float URebelAIConfig::GetHelperRangedAttackCooldownBasedOnCurrentDifficulty(URebelAIStub* Stub) {
    return 0.0f;
}

float URebelAIConfig::GetCooldownBasedOnCurrentDifficulty(UObject* WorldContext) {
    return 0.0f;
}

float URebelAIConfig::GetBlendTimesBasedOnTags(UAnimMontage* NewMontage, UAnimMontage* CurrentMontage, UObject* WorldContextObject) {
    return 0.0f;
}


