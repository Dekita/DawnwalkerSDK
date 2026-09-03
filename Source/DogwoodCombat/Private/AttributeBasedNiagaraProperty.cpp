#include "AttributeBasedNiagaraProperty.h"

FAttributeBasedNiagaraProperty::FAttributeBasedNiagaraProperty() {
    this->bGetPercentage = false;
    this->bSmoothAttributeChange = false;
    this->TimeToReachTheValue = 0.00f;
    this->CurrentPropertyValue = 0.00f;
    this->StartPropertyValue = 0.00f;
    this->TargetPropertyValue = 0.00f;
    this->TimeElapsed = 0.00f;
}

