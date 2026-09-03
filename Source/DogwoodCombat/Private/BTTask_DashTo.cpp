#include "BTTask_DashTo.h"

UBTTask_DashTo::UBTTask_DashTo() {
    this->AcceptableRadius = 100.00f;
    this->MaxDashNumbers = 4.00f;
    this->MinDashNumbers = 2.00f;
    this->MaxDashDistance = 400.00f;
    this->MinDashDistance = 200.00f;
    this->MaxDistortionLeftRight = 150.00f;
    this->MinDistortionLeftRight = 100.00f;
    this->MaxDistortionForward = 150.00f;
    this->MaxDistortionBackward = 100.00f;
    this->bAlwaysTryToChangeDashSides = false;
    this->bShowDebug = false;
}


