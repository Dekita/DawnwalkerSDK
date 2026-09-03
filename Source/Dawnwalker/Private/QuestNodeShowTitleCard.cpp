#include "QuestNodeShowTitleCard.h"

UQuestNodeShowTitleCard::UQuestNodeShowTitleCard() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(2);
    this->FadeInDuration = 0.50f;
    this->HoldDuration = 1.00f;
    this->FadeOutDuration = 1.00f;
}


