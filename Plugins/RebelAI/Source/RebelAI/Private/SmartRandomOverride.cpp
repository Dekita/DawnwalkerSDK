#include "SmartRandomOverride.h"

FSmartRandomOverride::FSmartRandomOverride() {
    this->BaseThreshold = 0.00f;
    this->IncreaseOnFailure = 0.00f;
    this->DecreaseOnSuccess = 0.00f;
    this->GradualReturn = 0.00f;
}

