#include "QuestNodeSetCharacterMortality.h"

UQuestNodeSetCharacterMortality::UQuestNodeSetCharacterMortality() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->MortalitySetting = EMortalitySetting::Mortal;
}


