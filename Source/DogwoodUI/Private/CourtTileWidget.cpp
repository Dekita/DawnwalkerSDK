#include "CourtTileWidget.h"

UCourtTileWidget::UCourtTileWidget() {
    this->TargetEntry = NULL;
    this->bHasOverrideState = false;
    this->OverrideState = ECourtEntryPowerState::Full;
}


void UCourtTileWidget::SetTargetEntry(const FGameplayTag& EntryTag) {
}

void UCourtTileWidget::SetOverrideState(bool bInOverride, ECourtEntryPowerState InOverrideState) {
}

bool UCourtTileWidget::IsAllied() const {
    return false;
}

ECourtTileType UCourtTileWidget::GetTileType() const {
    return ECourtTileType::None;
}

ECourtEntryPowerState UCourtTileWidget::GetTileState() const {
    return ECourtEntryPowerState::Full;
}


