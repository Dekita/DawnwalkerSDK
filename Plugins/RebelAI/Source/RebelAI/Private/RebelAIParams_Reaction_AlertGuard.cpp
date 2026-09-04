#include "RebelAIParams_Reaction_AlertGuard.h"

FRebelAIParams_Reaction_AlertGuard::FRebelAIParams_Reaction_AlertGuard() {
    this->SearchDistance = 0.00f;
    this->Behaviour = FRebelAIParams_Reaction_AlertGuard_BehaviourType::AlertNearest;
    this->AcceptanceDistance = 0.00f;
}

