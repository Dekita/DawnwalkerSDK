#include "SkipButtonWidget.h"

USkipButtonWidget::USkipButtonWidget() {
    this->InputActionWidget = NULL;
    this->FadeAnim = NULL;
    this->SkipEnhancedInputAction = NULL;
    this->bHoldSkipButtonAfterPressing = false;
    this->bSkipOnAnyInput = false;
}

void USkipButtonWidget::SetBlocked(bool bBlockShowing) {
}

void USkipButtonWidget::OnShowAnimationFinished() {
}


