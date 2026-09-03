#include "DawnwalkerGlossaryUnlockingSubsystem.h"

UDawnwalkerGlossaryUnlockingSubsystem::UDawnwalkerGlossaryUnlockingSubsystem() {
}

void UDawnwalkerGlossaryUnlockingSubsystem::SetRequestedDisplayedEntry(const FGameplayTag& Entry) {
}

void UDawnwalkerGlossaryUnlockingSubsystem::OnRegionStatusUpdated(const FRegionData& RegionData, bool bIsNewlyDiscovered, bool EnteredRegion) {
}

void UDawnwalkerGlossaryUnlockingSubsystem::OnGlossaryEntryUnlocked(const FGameplayTag& EntryTag, bool IsUpdated, bool bSilent) {
}

void UDawnwalkerGlossaryUnlockingSubsystem::OnCombatEnded() {
}

void UDawnwalkerGlossaryUnlockingSubsystem::OnCharacterDied(UCombatComponentBase* Victim, UCombatComponentBase* Killer) {
}

FGameplayTag UDawnwalkerGlossaryUnlockingSubsystem::GetRequestedDisplayedEntry() {
    return FGameplayTag{};
}


