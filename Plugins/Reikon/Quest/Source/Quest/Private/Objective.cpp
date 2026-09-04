#include "Objective.h"

FObjective::FObjective() {
    this->bPushTimeToSpecificHour = false;
    this->CompletedObjectiveTimeProgression = EQuestTimeProgressionType::None;
    this->TimeProgressionTargetHour = 0;
    this->bIsOptional = false;
    this->bIsTimeSensitive = false;
    this->DayPhase = EObjectiveDayPhase::DayAndNight;
    this->State = EObjectiveState::EOS_None;
    this->MaxCount = 0;
    this->CurrentCount = 0.00f;
}

