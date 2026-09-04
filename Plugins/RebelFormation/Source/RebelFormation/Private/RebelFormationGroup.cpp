#include "RebelFormationGroup.h"

URebelFormationGroup::URebelFormationGroup() {
    this->FormationDefinition = NULL;
    this->FormationState = ERebelFormationState::Active;
    this->GroupDefinition = NULL;
    this->FormationActor = NULL;
    this->GroupDataTable = NULL;
}

void URebelFormationGroup::StopCombatBehaviour() {
}

void URebelFormationGroup::StartCombatBehaviour() {
}

void URebelFormationGroup::ResumeTransport(const bool bForce) {
}

void URebelFormationGroup::PauseTransport(const bool bForce) {
}

bool URebelFormationGroup::IsPointInArea(const FVector& Point, ERebelFormationAreaType AreaType) const {
    return false;
}

bool URebelFormationGroup::IsNotInCombat() const {
    return false;
}

bool URebelFormationGroup::IsInCombat() const {
    return false;
}

bool URebelFormationGroup::IsGuardDefeated() const {
    return false;
}

bool URebelFormationGroup::IsGuard(const AActor* Actor) {
    return false;
}

bool URebelFormationGroup::IsFormationSpawned() const {
    return false;
}

TArray<AActor*> URebelFormationGroup::GetSpawnedGuards() const {
    return TArray<AActor*>();
}

ERebelFormationState URebelFormationGroup::GetFormationState() const {
    return ERebelFormationState::Active;
}

FVector URebelFormationGroup::GetFormationPosition() const {
    return FVector{};
}

float URebelFormationGroup::GetAreaSize(const ERebelFormationAreaType AreaType) const {
    return 0.0f;
}

bool URebelFormationGroup::CheckLeftArea(const ERebelFormationAreaType AreaType, const bool bPlayerOnlyCheck) const {
    return false;
}

bool URebelFormationGroup::CheckIsInArea(const ERebelFormationAreaType AreaType, const bool bPlayerOnlyCheck) const {
    return false;
}

bool URebelFormationGroup::CheckEnteredArea(const ERebelFormationAreaType AreaType, const bool bPlayerOnlyCheck) const {
    return false;
}

bool URebelFormationGroup::CanStartCombatBehaviour() {
    return false;
}


