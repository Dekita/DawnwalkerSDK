#include "QuestNodeBlockXp.h"

UQuestNodeBlockXp::UQuestNodeBlockXp() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->Option = EBlockXpOption::Block;
}


