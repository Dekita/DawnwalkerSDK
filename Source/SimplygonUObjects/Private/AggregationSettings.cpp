#include "AggregationSettings.h"

FAggregationSettings::FAggregationSettings() {
    this->MergeGeometries = false;
    this->EnableGeometryCulling = false;
    this->GeometryCullingPrecision = 0.00f;
    this->SubdivideGeometryBasedOnUVTiles = false;
    this->SubdivisionTileSize = 0;
    this->ProcessSelectionSetID = 0;
    this->KeepUnprocessedSceneMeshes = false;
}

