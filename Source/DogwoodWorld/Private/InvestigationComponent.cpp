#include "InvestigationComponent.h"

UInvestigationComponent::UInvestigationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->bFadeOutOnEnter = true;
    this->EnterFadeOutTime = 1.00f;
    this->EnterFadeInTime = 1.00f;
    this->bFadeOutOnExit = true;
    this->ExitFadeOutTime = 1.00f;
    this->bFadeInOnExit = true;
    this->ExitFadeInTime = 1.00f;
    this->InvestigationWindowWidget = NULL;
    this->InvestigatingPlayerController = NULL;
    this->InputComponent = NULL;
}

void UInvestigationComponent::NotifyInvestigationStarted(bool bInCancellable) {
}

void UInvestigationComponent::NotifyInvestigationCancelled() {
}

bool UInvestigationComponent::IsCancellable() const {
    return false;
}

EInvestigationState UInvestigationComponent::GetInvestigationState() const {
    return EInvestigationState::None;
}


