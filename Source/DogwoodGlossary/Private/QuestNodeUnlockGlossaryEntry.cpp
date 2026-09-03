#include "QuestNodeUnlockGlossaryEntry.h"

UQuestNodeUnlockGlossaryEntry::UQuestNodeUnlockGlossaryEntry() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->bDoNotDisplayPrompt = false;
}


