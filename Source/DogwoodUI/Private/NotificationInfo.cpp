#include "NotificationInfo.h"

UNotificationInfo::UNotificationInfo() {
}

bool UNotificationInfo::ShouldCloseAutomatically() const {
    return false;
}

bool UNotificationInfo::ShouldBlockQueue() const {
    return false;
}

void UNotificationInfo::NotifyEnded() {
}

ENotificationType UNotificationInfo::GetType() const {
    return ENotificationType::None;
}


