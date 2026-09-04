#include "RebelHLTreeCompactStateTransition.h"

FRebelHLTreeCompactStateTransition::FRebelHLTreeCompactStateTransition() {
    this->ConditionsBegin = 0;
    this->Trigger = ERebelHLTreeTransitionTrigger::None;
    this->Priority = ERebelHLTreeTransitionPriority::None;
    this->Fallback = ERebelHLTreeSelectionFallback::None;
    this->ConditionsNum = 0;
    this->bTransitionEnabled = false;
}

