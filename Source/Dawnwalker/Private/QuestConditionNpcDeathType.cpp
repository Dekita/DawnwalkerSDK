#include "QuestConditionNpcDeathType.h"

UQuestConditionNpcDeathType::UQuestConditionNpcDeathType() {
    this->CheckDeathType = EDeathType::AtLeastOneDead;
    this->CheckPhaseType = ECommunityPhaseCheckType::CurrentPhase;
}


