#include "CompassPinWidget.h"

UCompassPinWidget::UCompassPinWidget() {
    this->DistanceBox = NULL;
    this->DistanceLabel = NULL;
    this->Mappin = NULL;
}

bool UCompassPinWidget::IsMappinTracked() const {
    return false;
}


