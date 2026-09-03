#include "TippedProgressBar.h"

UTippedProgressBar::UTippedProgressBar() {
    this->Progress = 1.00f;
    this->FillType = EFillType::LeftToRight;
    this->TipVisible = true;
    this->FlashOpacity = 0.00f;
}

void UTippedProgressBar::SetTipVisible(bool bInTipVisible) {
}

void UTippedProgressBar::SetTipBrush(FSlateBrush InBrush) {
}

void UTippedProgressBar::SetProgressBrush(FSlateBrush InBrush) {
}

void UTippedProgressBar::SetProgress(float InProgress) {
}

void UTippedProgressBar::SetFlashOpacity(float InFlashOpacity) {
}

void UTippedProgressBar::SetFlashMargin(const FMargin& InFlashMargin) {
}

void UTippedProgressBar::SetFlashBrush(FSlateBrush InBrush) {
}

void UTippedProgressBar::SetFillType(EFillType InFillType) {
}

FVector2D UTippedProgressBar::GetTipPosition() const {
    return FVector2D{};
}


