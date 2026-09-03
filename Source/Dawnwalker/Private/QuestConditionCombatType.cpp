#include "QuestConditionCombatType.h"

UQuestConditionCombatType::UQuestConditionCombatType() {
    this->PauseUntil = ECombatConditionType::CombatBegins;
}

void UQuestConditionCombatType::OnConditionTriggered() {
}


