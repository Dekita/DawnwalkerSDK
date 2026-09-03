#include "CustomTintWidget.h"

UCustomTintWidget::UCustomTintWidget() {
    this->FillBorder = NULL;
}

void UCustomTintWidget::SetBorderFromTextureReference(UTexture2D* InTexture) {
}

void UCustomTintWidget::SetBorderFromSoftTextureReference(TSoftObjectPtr<UTexture2D> InTexture) {
}


