#include "SystemIndicatorWidget.h"

USystemIndicatorWidget::USystemIndicatorWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->FadeAnim = NULL;
    this->LoopAnim = NULL;
}

void USystemIndicatorWidget::SetActive_Implementation(bool bInActive) {
}

float USystemIndicatorWidget::GetHoldTime() const {
    return 0.0f;
}

bool USystemIndicatorWidget::BP_GetHoldTime_Implementation(float& OutHoldTime) const {
    return false;
}


