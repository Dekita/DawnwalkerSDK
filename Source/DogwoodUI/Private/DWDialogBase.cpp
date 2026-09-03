#include "DWDialogBase.h"

UDWDialogBase::UDWDialogBase() {
    this->TitleLabel = NULL;
    this->DescriptionTextBlock = NULL;
    this->TimeoutTextBlock = NULL;
    this->ButtonEntryBox = NULL;
}


void UDWDialogBase::OnTimerTick_Implementation(int32 SecondsLeft) {
}

void UDWDialogBase::NotifyWindowClosed_Implementation() {
}


