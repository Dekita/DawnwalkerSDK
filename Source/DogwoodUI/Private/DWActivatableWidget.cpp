#include "DWActivatableWidget.h"

UDWActivatableWidget::UDWActivatableWidget() {
    this->bIsBackHandler = true;
    this->InputConfig = EDWWidgetInputMode::Default;
    this->GameMouseCaptureMode = EMouseCaptureMode::CapturePermanently;
    this->bRegisterAsPopup = false;
    this->bSupportsLoadingScreenPrevention = false;
}

void UDWActivatableWidget::TriggerBackActionInParent() {
}

void UDWActivatableWidget::TriggerBackAction() {
}

bool UDWActivatableWidget::ShouldBlockLoading_Implementation() const {
    return false;
}

void UDWActivatableWidget::SetInitialArguments_Implementation(const FGameplayTag& Tag) {
}

void UDWActivatableWidget::SetActionDomainOverrideEnabled(bool bEnabled) {
}

bool UDWActivatableWidget::IsPopup() const {
    return false;
}

FEventReply UDWActivatableWidget::HandleCancelAction_Implementation() {
    return FEventReply{};
}

EDWWidgetInputMode UDWActivatableWidget::GetInputModeOverride_Implementation() const {
    return EDWWidgetInputMode::Default;
}


