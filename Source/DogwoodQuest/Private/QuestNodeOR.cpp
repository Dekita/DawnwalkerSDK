#include "QuestNodeOR.h"

UQuestNodeOR::UQuestNodeOR() {
    this->Inputs.AddDefaulted(2);
    this->Outputs.AddDefaulted(1);
    this->bOneInvocation = true;
}


