#include "RebelSpineIKTraceSettings.h"

FRebelSpineIKTraceSettings::FRebelSpineIKTraceSettings() {
    this->StartOffset = 0.00f;
    this->EndOffset = 0.00f;
    this->SweepRadius = 0.00f;
    this->bDisableComplexTrace = false;
    this->ComplexTraceChannel = TraceTypeQuery1;
    this->SimpleTraceChannel = TraceTypeQuery1;
}

