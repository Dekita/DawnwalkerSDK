#include "QuestNodeTransportEvent.h"

UQuestNodeTransportEvent::UQuestNodeTransportEvent() {
    this->Inputs.AddDefaulted(2);
    this->Outputs.AddDefaulted(16);
}

void UQuestNodeTransportEvent::OnTransportUnregistered(const FGuid ID) {
}

void UQuestNodeTransportEvent::OnTransportStopped() {
}

void UQuestNodeTransportEvent::OnTransportSpawned() {
}

void UQuestNodeTransportEvent::OnTransportResumed() {
}

void UQuestNodeTransportEvent::OnTransportRegistered(const FGuid ID, ADawnwalkerTransportActor* Transport) {
}

void UQuestNodeTransportEvent::OnTransportDespawned() {
}

void UQuestNodeTransportEvent::OnTransportDefeated() {
}

void UQuestNodeTransportEvent::OnTransportDeativated() {
}

void UQuestNodeTransportEvent::OnTransportActivated() {
}

void UQuestNodeTransportEvent::OnPlayerLeftGuardArea() {
}

void UQuestNodeTransportEvent::OnPlayerEnteredGuardArea() {
}

void UQuestNodeTransportEvent::OnPawnKilled(APawn* PawnKilled) {
}

void UQuestNodeTransportEvent::OnCombatStopped() {
}

void UQuestNodeTransportEvent::OnCombatStarted() {
}


