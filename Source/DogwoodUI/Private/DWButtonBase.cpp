#include "DWButtonBase.h"

UDWButtonBase::UDWButtonBase() {
    this->ButtonInt = 0;
    this->ButtonObject = NULL;
    this->WidgetType = EUIAudioWidgetType::GenericWidget;
    this->bConsumeInput = true;
    this->bOverride_ButtonText = false;
}


void UDWButtonBase::SetParentPageType(EUIAudioCategory PageType) {
}

void UDWButtonBase::SetInputActionWidget(UCommonActionWidget* InWidget) {
}

void UDWButtonBase::SetButtonText(const FText& InText) {
}

EUIAudioCategory UDWButtonBase::GetParentPageType() const {
    return EUIAudioCategory::None;
}

float UDWButtonBase::GetActionProgress() const {
    return 0.0f;
}


