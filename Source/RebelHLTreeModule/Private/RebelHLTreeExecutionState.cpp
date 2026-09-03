#include "RebelHLTreeExecutionState.h"

FRebelHLTreeExecutionState::FRebelHLTreeExecutionState() {
    this->LastTickStatus = ERebelHLTreeRunStatus::Running;
    this->TreeRunStatus = ERebelHLTreeRunStatus::Running;
    this->RequestedStop = ERebelHLTreeRunStatus::Running;
    this->CurrentPhase = ERebelHLTreeUpdatePhase::Unset;
    this->StateChangeCount = 0;
}

