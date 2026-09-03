#include "QuestNodeDayPhaseBase.h"

UQuestNodeDayPhaseBase::UQuestNodeDayPhaseBase() {
    this->Inputs.AddDefaulted(1);
    this->DayPhase = EDayPhase::Day;
}


