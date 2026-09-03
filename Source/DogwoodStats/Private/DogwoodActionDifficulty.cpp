#include "DogwoodActionDifficulty.h"

FDogwoodActionDifficulty::FDogwoodActionDifficulty() {
    this->AttackAnimationSpeedMultiplier = 0.00f;
    this->AutoSelectBlockDirection = false;
    this->bAllowAttackingWhileAnotherNPCIsPerformingBestNodeInject = false;
    this->bAllowAttackingWhileAnotherNPCIsAttacking = false;
    this->bAllowAttackingWhileAnotherNPCIsInParryReaction = false;
    this->bAllowAttackingWhileAnotherNPCIsInBlockReaction = false;
    this->bAllowAttackingWhileAnotherNPCIsInOmniblockReaction = false;
    this->HelperTicketCooldownMultiplier = 0.00f;
    this->LowHealthHelperTicketCooldownMultiplier = 0.00f;
    this->HelperRangedAttackCooldownMultiplier = 0.00f;
    this->GlobalAILevelScaling = NULL;
}

