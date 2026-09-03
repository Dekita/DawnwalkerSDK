#include "NiagaraParamVariant.h"

FNiagaraParamVariant::FNiagaraParamVariant() {
    this->Type = ENiagaraVariantType::Float;
    this->FloatValue = 0.00f;
    this->IntValue = 0;
    this->BoolValue = false;
}

