#include "RebelSettingEntryWidgetBase.h"

URebelSettingEntryWidgetBase::URebelSettingEntryWidgetBase() : UUserWidget(FObjectInitializer::Get()) {
    this->bIsSelected = false;
    this->AboveNavNeighbor = NULL;
    this->BelowNavNeighbor = NULL;
}

void URebelSettingEntryWidgetBase::Update_Implementation() {
}

void URebelSettingEntryWidgetBase::Setup_Implementation(const FRebelSettingEntry& InEntry) {
}

void URebelSettingEntryWidgetBase::SetSettingSelected(bool bInSelected) {
}

void URebelSettingEntryWidgetBase::SetSettingNeighborWidgets_Implementation(UWidget* Above, UWidget* Below) {
}

void URebelSettingEntryWidgetBase::PlayUISelectSound_Implementation() {
}

void URebelSettingEntryWidgetBase::OnSelectionStateChanged_Implementation() {
}


FEventReply URebelSettingEntryWidgetBase::ChangeValueByAnalog_Implementation(const FGeometry& InGeometry, const FAnalogInputEvent& InAnalogEvent) {
    return FEventReply{};
}


