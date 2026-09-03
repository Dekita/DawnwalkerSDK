#include "QuestNodeWaitForStreaming.h"

UQuestNodeWaitForStreaming::UQuestNodeWaitForStreaming() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->WorldPartition = NULL;
}


