#include "QuestNodeShowReadable.h"

UQuestNodeShowReadable::UQuestNodeShowReadable() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(2);
    this->bSkipIfRead = true;
}


