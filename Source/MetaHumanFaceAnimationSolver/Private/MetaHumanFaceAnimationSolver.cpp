#include "MetaHumanFaceAnimationSolver.h"

UMetaHumanFaceAnimationSolver::UMetaHumanFaceAnimationSolver() {
    this->bOverrideDeviceConfig = false;
    this->DeviceConfig = NULL;
    this->bOverrideDepthMapInfluence = false;
    this->DepthMapInfluence = EDepthMapInfluenceValue::High;
    this->bOverrideEyeSolveSmoothness = false;
    this->EyeSolveSmoothness = 0.10f;
    this->bOverrideTeethMode = false;
    this->TeethMode = ETeethMode::TrackingPoints;
}


