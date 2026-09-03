#include "DWLoadingScreenWidget.h"

UDWLoadingScreenWidget::UDWLoadingScreenWidget() {
    this->FlavorTextStringTable = NULL;
    this->FlavorTextHoldDuration = 8.00f;
    this->LoadingScreenStringTable = NULL;
    this->VideoPlayer = NULL;
    this->Fade = NULL;
    this->ShaderCompilationMessageBox = NULL;
    this->ShaderCompilationProgressLabel = NULL;
    this->FlavorText = NULL;
    this->Panel = NULL;
    this->Content = NULL;
    this->FullLoadingContent = NULL;
    this->VideoContainer = NULL;
    this->BackgroundImages = NULL;
    this->FadeInAnim = NULL;
    this->FadeOutAnim = NULL;
}

void UDWLoadingScreenWidget::OnMediaReacheEnd() {
}

void UDWLoadingScreenWidget::OnFadeOutFinished() {
}

void UDWLoadingScreenWidget::OnFadeInFinished() {
}

void UDWLoadingScreenWidget::NotifyLoadingScreenStarted() {
}


