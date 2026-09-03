#include "VampireHungerRow.h"

FVampireHungerRow::FVampireHungerRow() {
    this->VampireHungerLevel = EVampireHunger::Low;
    this->ChanceToLoseControl = 0.00f;
    this->ChromaticAberrationStrength = 0.00f;
    this->VampireUrgeEffect = NULL;
    this->AlwaysVisibleVampireUrgeEffect = NULL;
}

