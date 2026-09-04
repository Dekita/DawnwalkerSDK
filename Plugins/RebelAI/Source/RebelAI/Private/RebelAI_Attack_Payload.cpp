#include "RebelAI_Attack_Payload.h"

FRebelAI_Attack_Payload::FRebelAI_Attack_Payload() {
    this->Damage = 0.00f;
    this->Attacker = NULL;
    this->StartTime = 0.00f;
    this->bIsUnblockable = false;
    this->CustomParryWindowMultiplierPerAttack = 0.00f;
}

