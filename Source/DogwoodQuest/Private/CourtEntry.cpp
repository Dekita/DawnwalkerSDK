#include "CourtEntry.h"

UCourtEntry::UCourtEntry() {
    this->Allegiance = ECourtAllegiance::None;
    this->DefaultStatus = ECourtEntryStatus::Hidden;
    this->RevealThreshold = 0.00f;
}

bool UCourtEntry::IsAllied(const UObject* WorldContextObj) const {
    return false;
}

int32 UCourtEntry::GetResolvedChildActivityCount(const UObject* WorldContextObj) const {
    return 0;
}

double UCourtEntry::GetPowerLevel(const UObject* WorldContextObj) const {
    return 0.0;
}

FGameplayTag UCourtEntry::GetEntryTag() const {
    return FGameplayTag{};
}

ECourtEntryStatus UCourtEntry::GetCourtEntryStatus(const UObject* WorldContextObj) const {
    return ECourtEntryStatus::Hidden;
}

ECourtEntryPowerState UCourtEntry::GetCourtEntryPowerState(const UObject* WorldContextObj) const {
    return ECourtEntryPowerState::Full;
}

int32 UCourtEntry::GetChildCount() const {
    return 0;
}

int32 UCourtEntry::GetChildActivityCount() const {
    return 0;
}

double UCourtEntry::GetAngerLevel(const UObject* WorldContextObj) const {
    return 0.0;
}


