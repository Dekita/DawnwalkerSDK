#include "RebelAIParams_MoveTo.h"

FRebelAIParams_MoveTo::FRebelAIParams_MoveTo() {
    this->AcceptanceRadius = 0.00f;
    this->bReachTestIncludesAgentRadius = false;
    this->bAllowPartialPath = false;
    this->bRequireNavigableEndLocation = false;
    this->bDontStopMovementOnRelease = false;
}

