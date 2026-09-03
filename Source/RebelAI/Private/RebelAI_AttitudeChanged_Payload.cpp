#include "RebelAI_AttitudeChanged_Payload.h"

FRebelAI_AttitudeChanged_Payload::FRebelAI_AttitudeChanged_Payload() {
    this->OtherStub = NULL;
    this->PreviousAttitude = ERebelAIAttitude::NotSet;
    this->NewAttitude = ERebelAIAttitude::NotSet;
}

