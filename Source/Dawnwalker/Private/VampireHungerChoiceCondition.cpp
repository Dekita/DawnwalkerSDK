#include "VampireHungerChoiceCondition.h"

UVampireHungerChoiceCondition::UVampireHungerChoiceCondition() {
    this->Condition = EVampireHungerCondition::AtLeast;
    this->RequiredHunger = EVampireHunger::Medium;
}


