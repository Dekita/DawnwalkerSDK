#include "CourtSettings.h"

UCourtSettings::UCourtSettings() {
    this->Edicts.AddDefaulted(9);
    this->MaxAlertLevel = 900;
    this->PowerFromUnresolvedChild = 0.50f;
}


