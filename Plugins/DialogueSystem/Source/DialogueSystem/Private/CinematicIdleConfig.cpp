#include "CinematicIdleConfig.h"

FCinematicIdleConfig::FCinematicIdleConfig() {
    this->bIsAdditive = false;
    this->bPerformDynamicBlend = false;
    this->bNormalizeWeights = false;
    this->BlendInTime = 0.00f;
    this->BlendOutTime = 0.00f;
}

