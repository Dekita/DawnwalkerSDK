#include "RebelHLTreeGameplayTagContainerMatchCondition.h"

FRebelHLTreeGameplayTagContainerMatchCondition::FRebelHLTreeGameplayTagContainerMatchCondition() {
    this->MatchType = EGameplayContainerMatchType::Any;
    this->bExactMatch = false;
    this->bInvert = false;
}

