#include "InfamyNotificationWidget.h"

UInfamyNotificationWidget::UInfamyNotificationWidget() {
    this->AlertNotification = NULL;
}


void UInfamyNotificationWidget::TriggerUpdateAnimations() {
}





bool UInfamyNotificationWidget::ShowsCourtEntry() const {
    return false;
}



bool UInfamyNotificationWidget::HasOfficer() const {
    return false;
}

bool UInfamyNotificationWidget::HasEntryReachedAngerLevel() const {
    return false;
}

bool UInfamyNotificationWidget::HasActivity() const {
    return false;
}

ECourtEntryPowerState UInfamyNotificationWidget::GetPreviousPowerState() const {
    return ECourtEntryPowerState::Full;
}

ECourtEntryPowerState UInfamyNotificationWidget::GetCurrentPowerState() const {
    return ECourtEntryPowerState::Full;
}

bool UInfamyNotificationWidget::ChangesAlertLevel() const {
    return false;
}


