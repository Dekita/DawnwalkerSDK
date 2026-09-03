#include "OverlayTintWidget.h"

UOverlayTintWidget::UOverlayTintWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->TintMaterial = NULL;
    this->MaterialRetainer = NULL;
}

void UOverlayTintWidget::SetTintColor(const FLinearColor& InColor) {
}

void UOverlayTintWidget::Render() {
}


