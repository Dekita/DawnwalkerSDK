#include "HoudiniParameterButtonStrip.h"
#include "EHoudiniParameterType.h"

UHoudiniParameterButtonStrip::UHoudiniParameterButtonStrip() {
    this->ParmType = EHoudiniParameterType::ButtonStrip;
    this->Value = 0;
    this->DefaultValue = 0;
}


