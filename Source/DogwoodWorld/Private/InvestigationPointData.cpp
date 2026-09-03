#include "InvestigationPointData.h"

FInvestigationPointData::FInvestigationPointData() {
    this->Zoom = EBOIZoomType::VeryClose;
    this->ZoomKind = EBOIZoomKind::Translation;
    this->bOverrideZoomDuration = false;
    this->PointChargeAmount = 0.00f;
    this->bCharged = false;
    this->bHasBeenInvestigated = false;
    this->SpawnedWidgetComponent = NULL;
}

