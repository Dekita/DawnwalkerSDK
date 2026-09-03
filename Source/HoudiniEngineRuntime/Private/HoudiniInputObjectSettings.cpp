#include "HoudiniInputObjectSettings.h"

FHoudiniInputObjectSettings::FHoudiniInputObjectSettings() {
    this->KeepWorldTransform = EHoudiniXformType::None;
    this->bImportAsReference = false;
    this->bImportAsReferenceRotScaleEnabled = false;
    this->bImportAsReferenceBboxEnabled = false;
    this->bImportAsReferenceMaterialEnabled = false;
    this->bExportLODs = false;
    this->bExportSockets = false;
    this->bPreferNaniteFallbackMesh = false;
    this->bExportColliders = false;
    this->bExportMaterialParameters = false;
    this->bAddRotAndScaleAttributesOnCurves = false;
    this->bUseLegacyInputCurves = false;
    this->UnrealSplineResolution = 0.00f;
    this->LandscapeExportType = EHoudiniLandscapeExportType::Heightfield;
    this->bLandscapeExportSelectionOnly = false;
    this->bLandscapeAutoSelectComponent = false;
    this->bLandscapeExportMaterials = false;
    this->bLandscapeExportLighting = false;
    this->bLandscapeExportNormalizedUVs = false;
    this->bLandscapeExportTileUVs = false;
    this->bLandscapeAutoSelectSplines = false;
    this->bLandscapeSplinesExportControlPoints = false;
    this->bLandscapeSplinesExportLeftRightCurves = false;
    this->bLandscapeSplinesExportSplineMeshComponents = false;
    this->bMergeSplineMeshComponents = false;
    this->bExportHeightDataPerEditLayer = false;
    this->bExportPaintLayersPerEditLayer = false;
    this->bExportMergedPaintLayers = false;
    this->bExportLevelInstanceContent = false;
}

