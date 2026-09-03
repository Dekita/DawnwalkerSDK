#include "QuestConditionEnemyLevelDiffType.h"

UQuestConditionEnemyLevelDiffType::UQuestConditionEnemyLevelDiffType() {
    this->LevelDifferenceThreshold = 0;
    this->bOverrideLevel = false;
    this->Condition = EConditionCheckType::EVCT_GreaterEqual;
}

void UQuestConditionEnemyLevelDiffType::CheckEnemyLevelDifference(const URebelAIStub* Attacker, const URebelAIStub* Defender) {
}


