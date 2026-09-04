#include "RebelAIParams_Reaction_StaticFear.h"

FRebelAIParams_Reaction_StaticFear::FRebelAIParams_Reaction_StaticFear() {
    this->ActivationDistance = 0.00f;
    this->DeactivationTimeout = 0.00f;
    this->bDeactivateIfSignalNotReceived = false;
    this->RememberFor = 0.00f;
    this->bPanicking = false;
}

