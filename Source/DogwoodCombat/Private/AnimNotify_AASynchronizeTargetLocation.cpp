#include "AnimNotify_AASynchronizeTargetLocation.h"

UAnimNotify_AASynchronizeTargetLocation::UAnimNotify_AASynchronizeTargetLocation() {
    this->bOrientateBackToPlayer = false;
    this->bRotationOnly = false;
    this->bSynchronizeZAxis = false;
    this->AdditionalSynchronizationPositionOrientation = ESynchronizationPositionOrientation::None;
    this->bSetKinematicBonesUpdateType = false;
}


