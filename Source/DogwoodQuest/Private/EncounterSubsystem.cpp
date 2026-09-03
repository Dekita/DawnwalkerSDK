#include "EncounterSubsystem.h"

UEncounterSubsystem::UEncounterSubsystem() {
}

void UEncounterSubsystem::MarkEncounterComplete(const FGameplayTag& EncounterTag) {
}

bool UEncounterSubsystem::IsEncounterActive(const UEncounterData* EncounterData) const {
    return false;
}

FCompletedEncounterData UEncounterSubsystem::GetCompletedEncounterData(const FGameplayTag& Tag) {
    return FCompletedEncounterData{};
}

void UEncounterSubsystem::BPDeactivateEncounter(AEncounterActor* OnActor) {
}

void UEncounterSubsystem::BPActivateEncounter(AEncounterActor* OnActor) {
}


