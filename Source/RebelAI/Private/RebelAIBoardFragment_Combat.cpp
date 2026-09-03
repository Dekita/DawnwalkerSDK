#include "RebelAIBoardFragment_Combat.h"

FRebelAIBoardFragment_Combat::FRebelAIBoardFragment_Combat() {
    this->bInCombat = false;
    this->DistanceToTarget = 0.00f;
    this->TargetLastSeenTime = 0.00f;
    this->LastActiveTime = 0.00f;
    this->bInAttackRange = false;
    this->bInAttackWindow = false;
    this->bAfterAttackWindow = false;
    this->bIsDuringUnblockableAttack = false;
    this->LastUnblockableAttackTime = 0.00f;
    this->bShouldShowGuardOnAnimation = false;
    this->bIsReadyForFinisher = false;
    this->TotalPhases = 0;
    this->CurrentPhase = 0;
    this->bTurnToLastBlockedEnemy = false;
    this->bUseLookAtTarget = false;
    this->CurrentHitStopPlayRate = 0.00f;
    this->bHasCombatPathForCoen = false;
    this->NextPathCheckTime = 0.00f;
    this->LastPathCheckTime = 0.00f;
}

