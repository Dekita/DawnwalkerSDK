#include "TraitLevel.h"

FTraitLevel::FTraitLevel() {
    this->bLocked = false;
    this->SkillPointsCost = 0;
    this->TimeCost = 0;
    this->SPToAccess = 0;
    this->MutationToUnlock = 0;
    this->LevelEffect = NULL;
}

