#include "MetaHumanViewportState.h"

FMetaHumanViewportState::FMetaHumanViewportState() {
    this->bShowCurves = false;
    this->bShowControlVertices = false;
    this->bShowSkeletalMesh = false;
    this->bShowFootage = false;
    this->bShowDepthMesh = false;
    this->bShowUndistorted = false;
    this->ViewModeIndex = VMI_BrushWireframe;
    this->FixedEV100 = 0.00f;
}

