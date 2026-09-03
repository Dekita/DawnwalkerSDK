#include "GeometryCullingSettings.h"

FGeometryCullingSettings::FGeometryCullingSettings() {
    this->UseClippingPlanes = false;
    this->ClippingPlaneSelectionSetID = 0;
    this->UseClippingGeometry = false;
    this->ClippingGeometrySelectionSetID = 0;
}

