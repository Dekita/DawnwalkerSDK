#include "RebelFormationPawnDefinition.h"

FRebelFormationPawnDefinition::FRebelFormationPawnDefinition() {
    this->OverrideIsEnemy = EHostileOverride::Default;
    this->RespawnType = ERespawnType::None;
    this->MovementProfile = NULL;
    this->ReactionConfig = NULL;
    this->bAllowChangePositionInFormation = false;
}

