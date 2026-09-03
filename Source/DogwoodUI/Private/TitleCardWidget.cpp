#include "TitleCardWidget.h"

UTitleCardWidget::UTitleCardWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->TitleLabel = NULL;
    this->FadeInAnim = NULL;
}

void UTitleCardWidget::ShowTitle(const FText& InTitle, float InFadeInDuration, float InHoldDuration, float InFadeOutDuration) {
}

void UTitleCardWidget::BroadcastEndAndCleanup() {
}


