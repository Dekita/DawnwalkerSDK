#include "Temp_RebelAILogicNodeDecorator_SetTicketCooldown.h"

FTemp_RebelAILogicNodeDecorator_SetTicketCooldown::FTemp_RebelAILogicNodeDecorator_SetTicketCooldown() {
    this->CooldownType = FTemp_ETicketCooldown::BlockTicketWhenAttackedWithoutTicketTime;
    this->bUseConfigOfTargetsAttacker = false;
}

