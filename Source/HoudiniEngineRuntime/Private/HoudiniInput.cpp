#include "HoudiniInput.h"

UHoudiniInput::UHoudiniInput() {
    this->Type = EHoudiniInputType::Invalid;
    this->PreviousType = EHoudiniInputType::Invalid;
    this->AssetNodeId = -1;
    this->InputNodeId = -1;
    this->InputIndex = 0;
    this->ParmId = -1;
    this->bIsObjectPathParameter = false;
    this->bHasChanged = false;
    this->bNeedsToTriggerUpdate = false;
    this->bPackBeforeMerge = false;
    this->bDirectlyConnectHdas = true;
    this->bExportOptionsMenuExpanded = false;
    this->bGeometryInputsMenuExpanded = true;
    this->bLandscapeOptionsMenuExpanded = false;
    this->bWorldInputsMenuExpanded = true;
    this->bCurveInputsMenuExpanded = true;
    this->bCurvePointSelectionMenuExpanded = true;
    this->bCurvePointSelectionUseAbsLocation = false;
    this->bCurvePointSelectionUseAbsRotation = false;
    this->bCookOnCurveChanged = true;
    this->GeometryInputObjects.AddDefaulted(1);
    this->bStaticMeshChanged = false;
    this->bInputAssetConnectedInHoudini = false;
    this->DefaultCurveOffset = 0.00f;
    this->bLandscapeHasExportTypeChanged = false;
    this->bIsWorldInputBoundSelector = false;
    this->bWorldInputBoundSelectorAutoUpdate = false;
    this->bLandscapeControlVisiblity = false;
    this->bCanDeleteHoudiniNodes = true;
    this->bLandscapeSplinesExportOptionsMenuExpanded = false;
}


