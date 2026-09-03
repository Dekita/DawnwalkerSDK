#include "NotificationWidget.h"
#include "Components/SlateWrapperTypes.h"

UNotificationWidget::UNotificationWidget() {
    this->Visibility = ESlateVisibility::Collapsed;
    this->TriggeringEnhancedInputAction = NULL;
    this->ActionButtonContainer = NULL;
    this->DismissButtonContainer = NULL;
    this->ShowAnim = NULL;
    this->HideAnim = NULL;
    this->State = ENotificationState::Hidden;
    this->CurrentNotification = NULL;
    this->CurrentNotificationDuration = 0.00f;
    this->NotificationCloseTime = 0.00f;
}

void UNotificationWidget::SetupData_Implementation() {
}

void UNotificationWidget::RestoreInputConfig() {
}

void UNotificationWidget::OnShowAnimationFinished() {
}

void UNotificationWidget::OnNotificationShown_Implementation() {
}

void UNotificationWidget::OnNotificationHidden_Implementation() {
}

void UNotificationWidget::OnHideAnimationFinished() {
}

void UNotificationWidget::OnActionPerformed_Implementation(ENotificationType InCurrentNotificationType) {
}

void UNotificationWidget::HideActionButton() {
}

FDataTableRowHandle UNotificationWidget::GetNotificationInputAction_Implementation() {
    return FDataTableRowHandle{};
}

UInputAction* UNotificationWidget::GetNotificationEnhancedInputAction_Implementation(FText& OutNameOverride) {
    return NULL;
}

void UNotificationWidget::ForceMenuInputConfig() {
}



