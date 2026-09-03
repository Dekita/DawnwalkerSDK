#include "QuestConditionCharacterDevelopmentType.h"

UQuestConditionCharacterDevelopmentType::UQuestConditionCharacterDevelopmentType() {
    this->PauseUntil = ECharacterDevelopmentConditionType::SkillBought;
    this->SkillTree = ECharacterDevelopmentMode::None;
    this->bAnyTrait = true;
    this->Trait = NULL;
}


