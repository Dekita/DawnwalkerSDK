#include "NotificationSubsystem.h"

UNotificationSubsystem::UNotificationSubsystem() {
    this->CurrentNotification = NULL;
}

void UNotificationSubsystem::TryShowNotificationFromNonBlockingQueue() {
}

void UNotificationSubsystem::SetNotificationsHidden(const bool bInHidden) {
}

void UNotificationSubsystem::RegisterNotificationPanel(TScriptInterface<INotificationPanelInterface> InPanel) {
}

void UNotificationSubsystem::PushNotificationBlocker(const FName& BlockerName) {
}

void UNotificationSubsystem::PushNotification(UNotificationInfo* Info) {
}

void UNotificationSubsystem::PushCollapsibleQuestNotification(const UQuest* TargetQuest, EQuestNotificationType Type) {
}

void UNotificationSubsystem::PopNotificationBlocker(const FName& BlockerName) {
}

UNotificationInfo* UNotificationSubsystem::GetCurrentNotificationInfo() const {
    return NULL;
}

bool UNotificationSubsystem::CanShowNotificationsNow() const {
    return false;
}


