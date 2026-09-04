#include "RebelHLTreeTransitionResult.h"

FRebelHLTreeTransitionResult::FRebelHLTreeTransitionResult() {
    this->CurrentRunStatus = ERebelHLTreeRunStatus::Running;
    this->ChangeType = ERebelHLTreeStateChangeType::None;
    this->Priority = ERebelHLTreeTransitionPriority::None;
    this->SourceRebelHLTree = NULL;
}

