#include "RebelAISubsystem.h"

URebelAISubsystem::URebelAISubsystem() {
    this->LastTimePlayerKilledCivilian = -340282346638528859811704183484516925440.00f;
    this->GameEventProcessor = NULL;
}

void URebelAISubsystem::UnsubscribeEventById(int32 ID) {
}

int32 URebelAISubsystem::SubscribeToStubEvent(URebelAIStub* AIStub, const FGameplayTag EventTag, FRebelAIStubEventDynamicDelegate Delegate) {
    return 0;
}

void URebelAISubsystem::ResetAggressionBetweenStubs(URebelAIStub* AIStubA, URebelAIStub* AIStubB) {
}

void URebelAISubsystem::ReportGameEvent(FRebelAIEvent& Event) {
}

void URebelAISubsystem::ReportEventToStub(URebelAIStub* AIStub, const FRebelAIEvent& Event) {
}

void URebelAISubsystem::ReportEventToAllStubsInRangeWithSkip(const FVector& Location, float Range, const FRebelAIEvent& Event, const TArray<URebelAIStub*>& SkipStubs) {
}

void URebelAISubsystem::ReportEventToAllStubsInRange(const FVector& Location, float Range, const FRebelAIEvent& Event) {
}

void URebelAISubsystem::ReportEvent(const FRebelAIEvent& Event) {
}

void URebelAISubsystem::RemovePlayerInvulnerability(UObject* Source) {
}

void URebelAISubsystem::RemoveCombatAgainstPlayerBlocker(UObject* Blocker) {
}

void URebelAISubsystem::ProcessPerception_SensingObject(const AController* Observer, const AActor* Object, bool Sensed) {
}

void URebelAISubsystem::OnPostGarbageCollect() {
}

bool URebelAISubsystem::IsPlayer(const URebelAIStub* AIStub) {
    return false;
}

bool URebelAISubsystem::IsEnabled() const {
    return false;
}

URebelAITicketsController* URebelAISubsystem::GetTicketsController() const {
    return NULL;
}

URebelAITestController* URebelAISubsystem::GetTestController() const {
    return NULL;
}

void URebelAISubsystem::GetStubsInRange(const FVector& Location, float Range, TArray<URebelAIStub*>& Stubs) const {
}

URebelAIReactionsController* URebelAISubsystem::GetReactionsController() const {
    return NULL;
}

void URebelAISubsystem::GetFactionStubsInRange(const FVector& Location, const FGameplayTag& Faction, float Range, TArray<URebelAIStub*>& Stubs, const bool bSortByDistance) const {
}

URebelAIFactionsController* URebelAISubsystem::GetFactionsController() const {
    return NULL;
}

void URebelAISubsystem::GetEnemyStubsInRange(URebelAIStub* AIStub, float Range, TArray<URebelAIStub*>& Stubs) const {
}

URebelAICounterController* URebelAISubsystem::GetCounterController() const {
    return NULL;
}

URebelAICooldownController* URebelAISubsystem::GetCooldownController() const {
    return NULL;
}

URebelAICombatController* URebelAISubsystem::GetCombatController() const {
    return NULL;
}

void URebelAISubsystem::GetCombatantsInRange(const FVector& Location, float Range, TArray<URebelAIStub*>& Stubs) const {
}

URebelAIStub* URebelAISubsystem::GetAIStubFromActor(const AActor* Actor) {
    return NULL;
}

URebelAIAggressionController* URebelAISubsystem::GetAggressionController() const {
    return NULL;
}

void URebelAISubsystem::ForceAggressionTowardsTargetForAllCombatantsInRange(URebelAIStub* Target, float Range) {
}

void URebelAISubsystem::ForceAggressionTowardsTarget(URebelAIStub* AIStub, URebelAIStub* Target, float ForceTargetDuration) {
}

URebelAIStub* URebelAISubsystem::FindStubWithTag(const FGameplayTag& Tag) const {
    return NULL;
}

void URebelAISubsystem::FindStubsWithTag(TArray<URebelAIStub*>& Array, const FGameplayTag& Tag) const {
}

URebelAIStub* URebelAISubsystem::FindStubByController(const AController* Controller) {
    return NULL;
}

URebelAIStub* URebelAISubsystem::FindStubByActor(const AActor* Actor) {
    return NULL;
}

URebelAIStub* URebelAISubsystem::FindPlayerStub() {
    return NULL;
}

URebelAIStub* URebelAISubsystem::FindNearestStubWithTag(const FVector& Origin, const FGameplayTag& Tag) const {
    return NULL;
}

bool URebelAISubsystem::DoesPathBetweenStubsExist(const URebelAIStub* AIStubA, const URebelAIStub* AIStubB, double MaxPathLength, bool bAllowNavLinks) const {
    return false;
}

bool URebelAISubsystem::BP_IsNewAIEnabledForPawn(const APawn* Pawn) {
    return false;
}

void URebelAISubsystem::AddPlayerInvulnerability(UObject* Source) {
}

void URebelAISubsystem::AddCombatAgainstPlayerBlocker(UObject* Blocker) {
}


