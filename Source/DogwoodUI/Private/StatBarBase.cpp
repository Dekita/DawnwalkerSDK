#include "StatBarBase.h"

UStatBarBase::UStatBarBase() : UUserWidget(FObjectInitializer::Get()) {
    this->MainProgressBar = NULL;
    this->BackgroundProgressBar = NULL;
    this->Progress = 0.50f;
    this->BackgroundBarDelayLeft = 0.00f;
}

void UStatBarBase::UpdateProgress_Implementation(float InProgress, bool bForceNoDelay) {
}


float UStatBarBase::GetSecondaryProgress_Implementation() const {
    return 0.0f;
}

float UStatBarBase::GetPrimaryProgress_Implementation() const {
    return 0.0f;
}


