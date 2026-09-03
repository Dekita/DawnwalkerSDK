#include "DogwoodNotifyState_CombatRootMotionScaling.h"

UDogwoodNotifyState_CombatRootMotionScaling::UDogwoodNotifyState_CombatRootMotionScaling() {
    this->bEnableRootMotionScaling = true;
    this->ForwardMovementCurveName = TEXT("Combat_Root_Translation_Forward");
    this->RightMovementCurveName = TEXT("Combat_Root_Translation_Right");
    this->MovementAlphaCurveName = TEXT("Combat_Root_Influence");
    this->bAllowEarlyBlendOut = true;
    this->EarlyBlendOutTime = 0.45f;
    this->bOverrideAnimRootMotion = false;
}


