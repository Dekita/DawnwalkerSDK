#include "CurveConstraint.h"

FCurveConstraint::FCurveConstraint() {
    this->ConstrainType = ECurveConstrainType::Any;
    this->ConstrainValue = 0.00f;
    this->AffectingValue = 0.00f;
}

