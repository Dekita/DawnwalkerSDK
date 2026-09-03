#include "CourtSubsystem.h"

UCourtSubsystem::UCourtSubsystem() {
    this->CourtEntryRoot = NULL;
    this->MaxPossibleThresholdLevel = 0;
    this->LoadedEdictsStringTable = NULL;
}

bool UCourtSubsystem::SetEntryStatusComplete(FGameplayTag EntryTag, ECourtEntryStatus NewStatus, int32 AlertChange) {
    return false;
}

bool UCourtSubsystem::SetEntryStatus(FGameplayTag EntryTag, ECourtEntryStatus NewStatus) {
    return false;
}

void UCourtSubsystem::SetAlertLevelByInt(int32 NewAlertLevel, FAlertLevelChangeInfo ChangeInfo) {
}

void UCourtSubsystem::SetAlertLevel(int32 NewSetAlertLevel) {
}

int32 UCourtSubsystem::GetThresholdLevelForArbitraryValue(float InAlertValue) const {
    return 0;
}

FGameplayTag UCourtSubsystem::GetSubEntryParentTag(FGameplayTag EntryTag) {
    return FGameplayTag{};
}

float UCourtSubsystem::GetSingleAlertThresholdBarValue() const {
    return 0.0f;
}

UCompoundCourtEntry* UCourtSubsystem::GetRootEntry() const {
    return NULL;
}

ECourtEntryType UCourtSubsystem::GetEntryType(FGameplayTag EntryTag) {
    return ECourtEntryType::None;
}

ECourtEntryStatus UCourtSubsystem::GetEntryStatusDirectlyFromFact(FGameplayTag EntryTag) {
    return ECourtEntryStatus::Hidden;
}

ECourtEntryStatus UCourtSubsystem::GetEntryStatus(FGameplayTag EntryTag) {
    return ECourtEntryStatus::Hidden;
}

int32 UCourtSubsystem::GetCurrentAlertThresholdLevel() const {
    return 0;
}

EAlertStage UCourtSubsystem::GetAlertStage() const {
    return EAlertStage::Low;
}

float UCourtSubsystem::GetAlertLevelPercentageForArbitraryValue(float InAlertValue) const {
    return 0.0f;
}

float UCourtSubsystem::GetAlertLevelPercentage() const {
    return 0.0f;
}

int32 UCourtSubsystem::GetAlertLevel() const {
    return 0;
}

void UCourtSubsystem::DropAlertLevelByInt(int32 Amount) {
}

void UCourtSubsystem::ChangeAlertLevelByInt(int32 Amount, FAlertLevelChangeInfo ChangeInfo) {
}

void UCourtSubsystem::ChangeAlertLevel(EAlertChange Change) {
}


