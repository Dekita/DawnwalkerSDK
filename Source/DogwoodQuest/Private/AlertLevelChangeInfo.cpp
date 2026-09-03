#include "AlertLevelChangeInfo.h"

FAlertLevelChangeInfo::FAlertLevelChangeInfo() {
    this->PreviousAlertLevel = 0.00f;
    this->NewAlertLevel = 0.00f;
    this->PreviousEdictIndex = 0;
    this->NewEdictIndex = 0;
    this->PreviousPowerState = ECourtEntryPowerState::Full;
}

