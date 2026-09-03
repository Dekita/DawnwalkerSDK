#include "MappinConfigRow.h"

FMappinConfigRow::FMappinConfigRow() {
    this->Type = EMappinType::None;
    this->bVisibleInCompass = false;
    this->bClampPositionInCompass = false;
    this->CompassVisibilityDistanceLimit = false;
    this->CompassVisibilityMaxDistance = 0.00f;
    this->bVisibleInMap = false;
    this->MapVisibilityMinZoom = 0.00f;
    this->MapVisibilityMaxZoom = 0.00f;
}

