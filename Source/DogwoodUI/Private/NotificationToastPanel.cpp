#include "NotificationToastPanel.h"

UNotificationToastPanel::UNotificationToastPanel() : UUserWidget(FObjectInitializer::Get()) {
    this->ToastWidgetClass = NULL;
}

void UNotificationToastPanel::OnNotificationWidgetHidden(UNotificationWidget* Widget) {
}

UNotificationWidget* UNotificationToastPanel::GetToastWidgetFromPool() {
    return NULL;
}


