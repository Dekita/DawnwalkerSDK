#include "QuestNodeDebugSetDifficulty.h"

UQuestNodeDebugSetDifficulty::UQuestNodeDebugSetDifficulty() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->DifficultyLevel = EDWDifficultyLevel::Normal;
}


