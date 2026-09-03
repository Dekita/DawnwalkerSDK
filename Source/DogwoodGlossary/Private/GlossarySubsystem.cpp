#include "GlossarySubsystem.h"

UGlossarySubsystem::UGlossarySubsystem() {
    this->LoadedGlossaryTable = NULL;
}

void UGlossarySubsystem::UnlockEntry(const FGameplayTag& Tag, bool bSilent) {
}

void UGlossarySubsystem::SortEntries() {
}

void UGlossarySubsystem::ShowReadable_SoftReference(const TSoftObjectPtr<UReadableDataAsset>& ReadableAsset) {
}

void UGlossarySubsystem::ShowReadable(const UReadableDataAsset* ReadableAsset) {
}

void UGlossarySubsystem::RegisterReadableIDAsViewed(const FName& ReadableID) {
}

void UGlossarySubsystem::RegisterReadableAsViewed(const UReadableDataAsset* ReadableAsset) {
}

void UGlossarySubsystem::RegisterReadableAsUnlocked(const UReadableDataAsset* ReadableAsset) {
}

void UGlossarySubsystem::RegisterEntryAsViewed(const FGameplayTag& Tag) {
}

void UGlossarySubsystem::RegisterEntryAndUnlockedSectionsAsViewed(const FGlossaryEntry& Entry) {
}

void UGlossarySubsystem::OnCloseReadable(const UReadableDataAsset* ReadableAsset) {
}

bool UGlossarySubsystem::IsEntryUnlocked(const FGlossaryEntry& Entry) const {
    return false;
}

bool UGlossarySubsystem::IsEntryTagUnlocked(const FGameplayTag& Tag) const {
    return false;
}

bool UGlossarySubsystem::HasReadableBeenViewed(const FName& ReadableID) const {
    return false;
}

bool UGlossarySubsystem::HasReadableBeenUnlocked(const FName& ReadableID) const {
    return false;
}

bool UGlossarySubsystem::HasEntryBeenViewed(const FGameplayTag& Tag) const {
    return false;
}

bool UGlossarySubsystem::HasEntryAndUnlockedSectionsBeenViewed(const FGlossaryEntry& Entry) const {
    return false;
}

FText UGlossarySubsystem::GetUnlockedContentText(const FGlossaryEntry& Entry) const {
    return FText::GetEmpty();
}

FReadableSealTypeRow UGlossarySubsystem::GetSeal(const EReadableSealType Seal) const {
    return FReadableSealTypeRow{};
}

FGlossaryEntry UGlossarySubsystem::GetGlossaryEntry(const FGameplayTag& Tag) {
    return FGlossaryEntry{};
}

TArray<FGlossaryEntry> UGlossarySubsystem::GetEntriesForCategory(const FGameplayTag CategoryTag) {
    return TArray<FGlossaryEntry>();
}

FReadableDecalTypeRow UGlossarySubsystem::GetDecal(const EReadableDecalType Decal) const {
    return FReadableDecalTypeRow{};
}

FReadableBackgroundTypeRow UGlossarySubsystem::GetBackground(const EReadableBackgroundType Background) const {
    return FReadableBackgroundTypeRow{};
}


