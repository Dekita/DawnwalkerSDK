#include "DawnwalkerPasserbyLookAtParams.h"

FDawnwalkerPasserbyLookAtParams::FDawnwalkerPasserbyLookAtParams() {
    this->NoTargetPriority = 0;
    this->DefaultPriority = 0;
    this->LooseTargetMinTimeout = 0.00f;
    this->LooseTargetMaxTimeout = 0.00f;
    this->RecoverTargetMinTimeout = 0.00f;
    this->RecoverTargetMaxTimeout = 0.00f;
    this->LookAtMaxRange = 0.00f;
    this->LookAtMinYaw = 0.00f;
    this->LookAtMaxYaw = 0.00f;
    this->LookAtMinPitch = 0.00f;
    this->LookAtMaxPitch = 0.00f;
    this->bDetectPlayer = false;
    this->bDetectAI = false;
}

