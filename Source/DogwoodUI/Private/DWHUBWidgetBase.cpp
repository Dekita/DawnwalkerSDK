#include "DWHUBWidgetBase.h"

UDWHUBWidgetBase::UDWHUBWidgetBase() {
    this->HubSwitcher = NULL;
}

void UDWHUBWidgetBase::RequestSwitchToTab_Implementation(const FGameplayTag& TabTag) {
}

void UDWHUBWidgetBase::RequestCloseHub_Implementation() {
}

void UDWHUBWidgetBase::ProcessHubMessage_Implementation(UHubMessage* InMessage) {
}

void UDWHUBWidgetBase::OnTransitioningChanged_Implementation(bool bIsTransitioning) {
}


