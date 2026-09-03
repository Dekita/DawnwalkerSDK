#include "MappinWidget.h"

UMappinWidget::UMappinWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->MappinTarget = EMappinTarget::Compass;
}

void UMappinWidget::UpdateOverlays_Implementation(FMappinInstanceId MappinId) {
}

void UMappinWidget::SetupMappin_Implementation(FMappinInstanceId MappinId) {
}

void UMappinWidget::SetMappinTarget(EMappinTarget InMappinTarget) {
}


