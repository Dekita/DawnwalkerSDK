#include "CombatSubsystem.h"

UCombatSubsystem::UCombatSubsystem() {
    this->bDrawGuardAreas = false;
    this->bDebugTickets = false;
    this->bHasCombatComponentActive = false;
    this->GlobalBlendTimes = NULL;
    this->bIsInCombat = false;
    this->ActionDifficultyLevel = ERebelGameDifficulty::Story;
    this->RPGDifficultyLevel = ERebelGameDifficulty::Story;
    this->DifficultyConfig = NULL;
}

void UCombatSubsystem::SetRPGDifficulty(ERebelGameDifficulty NewDifficultyLevel) {
}

void UCombatSubsystem::SetActionDifficulty(ERebelGameDifficulty NewDifficultyLevel) {
}

void UCombatSubsystem::OnSettingChanged(ERebelSetting RebelSetting, float Value, ERebelSettingChangeMode RebelSettingChangeMode) {
}

void UCombatSubsystem::OnNewAICharacterPreDeath(URebelAIStub* Victim, URebelAIStub* Killer) {
}

void UCombatSubsystem::OnNewAICharacterDied(URebelAIStub* Victim, URebelAIStub* Killer) {
}

void UCombatSubsystem::OnLoadingScreenStateChanged(ELoadingScreenState LoadingScreenState) {
}

void UCombatSubsystem::OnFactEntryChanged(const FGameplayTag& FactName) {
}

bool UCombatSubsystem::IsOnLastOpponentDisabled() {
    return false;
}

bool UCombatSubsystem::IsInventoryConsumptionBlockedInCombat() {
    return false;
}

FDogwoodRPGDifficulty UCombatSubsystem::GetRPGDifficultySettings() const {
    return FDogwoodRPGDifficulty{};
}

bool UCombatSubsystem::GetIsInCombat() const {
    return false;
}

UCombatComponentBase* UCombatSubsystem::GetCurrentBossNPC() {
    return NULL;
}

UCombatConfig* UCombatSubsystem::GetCombatConfig() {
    return NULL;
}

TArray<AActor*> UCombatSubsystem::GetAllAggressiveNPCActors() {
    return TArray<AActor*>();
}

int32 UCombatSubsystem::GetAggressiveNpcCount() const {
    return 0;
}

FDogwoodActionDifficulty UCombatSubsystem::GetActionDifficultySettings() const {
    return FDogwoodActionDifficulty{};
}

ERebelGameDifficulty UCombatSubsystem::GetActionDifficultyLevel() const {
    return ERebelGameDifficulty::Story;
}

void UCombatSubsystem::BroadcastOnPreCombatEnd(const URebelAIStub* Guard) {
}

void UCombatSubsystem::BroadcastOnPreCombatAggressionChange(bool bState, const URebelAIStub* Guard) {
}

void UCombatSubsystem::BroadcastOnPreCombat(const URebelAIStub* Guard) {
}


