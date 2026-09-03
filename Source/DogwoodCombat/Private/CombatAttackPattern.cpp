#include "CombatAttackPattern.h"

UCombatAttackPattern::UCombatAttackPattern() {
    this->BasicAttackUsageFrequencyMultiplier = 1.00f;
    this->MinAttackRange = 75.00f;
    this->MaxAttackRange = 100.00f;
    this->bMakeAllAttackUnblockable = false;
    this->bUseDash = false;
    this->bCustomizeDash = false;
}


