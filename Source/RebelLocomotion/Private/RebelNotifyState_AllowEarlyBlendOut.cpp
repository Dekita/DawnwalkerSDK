#include "RebelNotifyState_AllowEarlyBlendOut.h"

URebelNotifyState_AllowEarlyBlendOut::URebelNotifyState_AllowEarlyBlendOut() {
    this->ThisMontage = NULL;
    this->BlendOutTime = 0.25f;
    this->bCheckMovementInput = true;
    this->bCheckMovementMode = true;
    this->RequiredMode = MOVE_Walking;
}


