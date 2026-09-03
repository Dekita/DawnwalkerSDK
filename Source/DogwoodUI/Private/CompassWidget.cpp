#include "CompassWidget.h"

UCompassWidget::UCompassWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->PinContainer = NULL;
    this->SpatialPinContainer = NULL;
    this->HeadingWidgetClass = NULL;
    this->MapPinWidgetClass = NULL;
    this->ClampedMappinPositionPercentage = 1.00f;
}

void UCompassWidget::UpdatePinState(int64 ID, EMappinType InType, EMappinState InState) {
}

void UCompassWidget::UpdatePinPosition(int64 ID, const FVector& position) {
}

void UCompassWidget::UpdateCompassMode() {
}

void UCompassWidget::RemoveSpatialPin(int64 ID) {
}

void UCompassWidget::RemovePin(int64 ID) {
}

void UCompassWidget::PreCombatSignalAggressive(bool bState, const URebelAIStub* Guard) {
}

void UCompassWidget::PreCombatSignal(const URebelAIStub* Guard) {
}

void UCompassWidget::PreCombatEnded(const URebelAIStub* Guard) {
}

void UCompassWidget::OnSettingChanged(ERebelSetting InSetting, float InVal, ERebelSettingChangeMode InSettingChangeMode) {
}

void UCompassWidget::OnQuestTracked(const UQuest* Quest, const FGuid& Objective, bool bSilent) {
}

void UCompassWidget::OnPinAreaLeft(int64 ID) {
}

void UCompassWidget::OnPinAreaEntered(int64 ID) {
}

void UCompassWidget::OnCombatStarted() {
}

void UCompassWidget::OnAttackerUnregistered(const URebelAIStub* Attacker, const URebelAIStub* Defender) {
}

float UCompassWidget::GetPlayerYaw() const {
    return 0.0f;
}

ECompassMode UCompassWidget::GetCurrentCompassMode() {
    return ECompassMode::Default;
}

void UCompassWidget::EnableSpatialMappins() {
}

void UCompassWidget::DisableSpatialMappins() {
}

float UCompassWidget::DirectionVectorToCompassYaw(const FVector& InVector) {
    return 0.0f;
}


void UCompassWidget::AddSpatialPin(int64 InID, EMappinType InType, EMappinState InState, bool bInEnabled, const FVector& InLocation) {
}

void UCompassWidget::AddPin(int64 InID, EMappinType InType, EMappinState InState, bool bInEnabled, const FVector& InPinLocation) {
}


