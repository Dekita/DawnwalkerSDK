#include "QuestNodeSetSlowdown.h"

UQuestNodeSetSlowdown::UQuestNodeSetSlowdown() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->TargetTimeDilation = 1.00f;
    this->SmoothDuration = 1.00f;
    this->bSetIgnoreCameraTickCompensation = false;
}


