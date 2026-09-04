#include "RebelAIBoardFragment_DebugAP.h"

FRebelAIBoardFragment_DebugAP::FRebelAIBoardFragment_DebugAP() {
    this->LastAPTickTime = 0.00f;
    this->bIsEnteringAP = false;
    this->bIsDuringLeavingState = false;
    this->bIsAborted = false;
    this->AbortMode = 0;
}

