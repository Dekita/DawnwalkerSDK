#include "NormalCalculationSettings.h"

FNormalCalculationSettings::FNormalCalculationSettings() {
    this->ReplaceNormals = false;
    this->RepairInvalidNormals = false;
    this->HardEdgeAngle = 0.00f;
    this->ReplaceTangents = false;
    this->ReorthogonalizeTangentSpace = false;
    this->ScaleByArea = false;
    this->ScaleByAngle = false;
    this->SnapNormalsToFlatSurfaces = false;
}

