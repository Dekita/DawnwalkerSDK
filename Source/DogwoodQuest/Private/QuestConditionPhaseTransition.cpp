#include "QuestConditionPhaseTransition.h"

UQuestConditionPhaseTransition::UQuestConditionPhaseTransition() {
    this->Type = EPhaseTransitionType::Start;
    this->TargetPhase = ETransitionTargetPhase::Both;
    this->bTriggerWhenSkippingEntirePhase = false;
}


