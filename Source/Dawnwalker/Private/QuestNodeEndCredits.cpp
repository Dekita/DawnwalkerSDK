#include "QuestNodeEndCredits.h"

UQuestNodeEndCredits::UQuestNodeEndCredits() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
}

void UQuestNodeEndCredits::OnCreditsEnded() {
}


