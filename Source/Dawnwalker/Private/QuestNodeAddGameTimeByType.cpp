#include "QuestNodeAddGameTimeByType.h"

UQuestNodeAddGameTimeByType::UQuestNodeAddGameTimeByType() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(2);
    this->QuestTimeProgressionType = EQuestTimeProgressionType::None;
}


