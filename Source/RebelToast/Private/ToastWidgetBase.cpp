#include "ToastWidgetBase.h"

UToastWidgetBase::UToastWidgetBase() : UUserWidget(FObjectInitializer::Get()) {
    this->FadeInAnim = NULL;
    this->FadeOutAnim = NULL;
    this->Label = NULL;
}

void UToastWidgetBase::Show(const FToastMessage& Message) {
}

void UToastWidgetBase::OnShowRequested_Implementation(const FToastMessage& Message) {
}

void UToastWidgetBase::NotifyToastComplete() {
}

bool UToastWidgetBase::IsShowingToast() {
    return false;
}


