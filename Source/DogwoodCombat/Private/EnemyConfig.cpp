#include "EnemyConfig.h"

UEnemyConfig::UEnemyConfig() {
    this->Name = FText::FromString(TEXT("Default Enemy Config"));
    this->bOverrideAttributes = false;
    this->DayStats = NULL;
    this->NightStats = NULL;
    this->HealthSegments = 1;
    this->HealthBarZOffset = 105.00f;
    this->SufficientStaminaRatio = 0.90f;
    this->bInfiniteParryWindow = false;
    this->ParryWindowRatio = 0.28f;
    this->ParryWindowTime = 0.18f;
    this->bLoseStaminaWhenParried = false;
    this->StaminaLossWhenParried = 0.00f;
    this->bDisableAnyReactionsDuringAttacks = false;
    this->bAllowAttackFromBehind = false;
    this->BaseMinimalTimeBetweenAttacks = 0.00f;
    this->bCanUseDirectionalGuard = false;
    this->bCanUseNeutralGuard = true;
    this->MinSuccessRationNeeded = 0.45f;
    this->NeutralGuardCooldown = 12.00f;
    this->NeutralGuardDuration = 6.00f;
    this->bCanParry = false;
    this->bCanParryDuringAllActions = false;
    this->bCanAttackParry = true;
    this->AttackParryHitWindowCoverPercent = 0.50f;
    this->bCanCounterAttack = true;
    this->CounterAttackChanceForDodge = 0.50f;
    this->CounterAttackChanceForParry = 0.50f;
    this->CounterAttackChanceForNoEscape = 1.00f;
    this->bCanDodge = false;
    this->bAlwaysDodgeWhenPlayerInFatigueState = false;
    this->bAlwaysDodgeWhenAttackDirectionIsPredictable = false;
    this->DodgeStaminaCost = 20.00f;
    this->bCoenAttackAfterParryTag = true;
    this->bCoenAttackAfterBlockTag = true;
    this->bCoenAttackAfterHitTag = true;
    this->FavoredDistanceMin = 150.00f;
    this->FavoredDistanceMax = 200.00f;
    this->LeftFlankAngle = 65.00f;
    this->RightFlankAngle = 115.00f;
    this->bEnableCombatDistanceCapsule = true;
    this->DistanceCapsuleRadius = 130.00f;
    this->StunThreshold = 0.33f;
    this->MinimumStunChance = 0.20f;
    this->MaximumStunChance = 0.50f;
    this->CameraTurnAssistMultiplier = 1.00f;
    this->CameraZoomAssistMultiplier = 1.00f;
    this->StaminaRegenMultiply = 1.00f;
    this->BlockTicketWhenAttackedWithoutTicketTime = 2.00f;
    this->TicketChangeChance = 0.80f;
    this->ChanceForRandomTicket = 0.20f;
    this->TicketRefreshTimeMin = 2.00f;
    this->TicketRefreshTimeMax = 4.00f;
    this->IfSomeoneCloserTicketChangeChance = 0.80f;
    this->IfSomeoneCloserTicketRefreshTime = 1.00f;
    this->MinFavoredDistanceWithoutTicket = 400.00f;
    this->MaxFavoredDistanceWithoutTicket = 600.00f;
    this->MaxConeAngleForBackwardEnemies = 60.00f;
    this->MinConeAngleForBackwardEnemies = 60.00f;
}

bool UEnemyConfig::CanBlock() {
    return false;
}


