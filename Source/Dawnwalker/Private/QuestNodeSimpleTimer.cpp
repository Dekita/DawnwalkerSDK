#include "QuestNodeSimpleTimer.h"

UQuestNodeSimpleTimer::UQuestNodeSimpleTimer() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->TotalTime = 1.00f;
    this->bCountdown = true;
}


