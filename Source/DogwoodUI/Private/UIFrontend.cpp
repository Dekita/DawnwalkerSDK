#include "UIFrontend.h"

UUIFrontend::UUIFrontend() {
    this->FadeOverlay = NULL;
    this->RootOverlay = NULL;
    this->TitleCard = NULL;
    this->ToastWidget = NULL;
    this->_WMC = NULL;
}

void UUIFrontend::ToggleFrontendVisibility() {
}

void UUIFrontend::ShowPauseMenu() {
}

void UUIFrontend::SetGameLayersVisible(bool bVisible) {
}

void UUIFrontend::SetFrontendVisible(bool bVisible) {
}

void UUIFrontend::RegisterLayer(FGameplayTag LayerTag, UCommonActivatableWidgetContainerBase* LayerWidget) {
}


bool UUIFrontend::PlayVideo(const FVideoPlaybackOptions& Options) {
    return false;
}

void UUIFrontend::OnVideoQueueStarted() {
}

void UUIFrontend::OnVideoQueueFinished() {
}

UUIFrontend* UUIFrontend::GetFrontend(const UObject* WorldContextObject) {
    return NULL;
}


