#include "QuestNodeEquipItemsOnPlayer.h"

UQuestNodeEquipItemsOnPlayer::UQuestNodeEquipItemsOnPlayer() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->Mode = EEquipItemMode::AddMissingAndEquip;
    this->bMarkItemsAsNew = true;
}


