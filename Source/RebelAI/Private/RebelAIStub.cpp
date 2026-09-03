#include "RebelAIStub.h"

URebelAIStub::URebelAIStub() {
    this->AIBoard = NULL;
    this->EquipmentProxy = NULL;
    this->CachedAIDefinition = NULL;
    this->CachedAIReactions = NULL;
    this->OverridenCachedAIReactions = NULL;
    this->AssetTreeQueryContext = NULL;
    this->Test_LogicTree = NULL;
}

bool URebelAIStub::StowWeapon(const bool bPlayAnim) {
    return false;
}

void URebelAIStub::StopBrain() {
}

void URebelAIStub::StartBrain() {
}

void URebelAIStub::SetPerceptionEnabled(bool bEnable) {
}

void URebelAIStub::SetFocus(URebelAIStub* Target) {
}

void URebelAIStub::SetFaction(const FGameplayTag Faction) {
}

void URebelAIStub::SetAttitudeTowards(URebelAIStub* OtherStub, ERebelAIAttitude Attitude, bool bKeep) {
}

void URebelAIStub::ResetPerception(bool bStimuliListenerUpdate) {
}

void URebelAIStub::RequestDespawn(bool bRequest) {
}

void URebelAIStub::RemoveTag(const FGameplayTag& Tag) {
}

void URebelAIStub::PlayVoiceSetWithCallback(const FGameplayTag& VoiceSetTag, FRebelAIOnVoiceSetFinished Delegate, bool LimitByConfig) {
}

void URebelAIStub::PlayVoiceSet(const FGameplayTag& VoiceSetTag, bool LimitByConfig) {
}

URebelAIActionExecutionContext* URebelAIStub::PerformDynamicActionWithEvent(const FGameplayTagContainer& ActionTags, const FRebelAIEvent& RelatedEvent, const bool bOptional) {
    return NULL;
}

URebelAIActionExecutionContext* URebelAIStub::PerformDynamicAction(const FGameplayTagContainer& ActionTags) {
    return NULL;
}

void URebelAIStub::OnTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus) {
}

void URebelAIStub::OnTargetPerceptionForgotten(AActor* Actor) {
}

void URebelAIStub::OnCutsceneStart() {
}

void URebelAIStub::OnAbilityCommited(UGameplayAbility* Ability) {
}

bool URebelAIStub::IsTargetable() const {
    return false;
}

bool URebelAIStub::IsStubVisibleByPlayer() const {
    return false;
}

bool URebelAIStub::IsPointInPopulationArea(const FVector Point) const {
    return false;
}

bool URebelAIStub::IsPlayer() const {
    return false;
}

bool URebelAIStub::IsMoving() const {
    return false;
}

bool URebelAIStub::IsInitializedAndHasPawn() const {
    return false;
}

bool URebelAIStub::IsInCombat() const {
    return false;
}

bool URebelAIStub::IsInCinematicMode() const {
    return false;
}

bool URebelAIStub::IsHostileTowardsPlayer() const {
    return false;
}

bool URebelAIStub::IsHostileTowards(const URebelAIStub* OtherStub) const {
    return false;
}

bool URebelAIStub::IsFriendlyTowardsPlayer() const {
    return false;
}

bool URebelAIStub::IsFriendlyTowards(const URebelAIStub* OtherStub) const {
    return false;
}

bool URebelAIStub::IsAtRiskOfPunishment() const {
    return false;
}

bool URebelAIStub::HasTag(const FGameplayTag& Tag) const {
    return false;
}

bool URebelAIStub::HasReactionForSituation(const FGameplayTag& SituationTag) const {
    return false;
}

bool URebelAIStub::HasPopulationArea() const {
    return false;
}

bool URebelAIStub::HasPawn() const {
    return false;
}

APopulationArea* URebelAIStub::GetStubPopulationArea() const {
    return NULL;
}

float URebelAIStub::GetRemainingPathLength() const {
    return 0.0f;
}

URebelAIStubReactionsConfig* URebelAIStub::GetReactionsConfig() const {
    return NULL;
}

int32 URebelAIStub::GetNumObservers() const {
    return 0;
}

UCommunityNPCDefinitionBase* URebelAIStub::GetNPCDefinition() const {
    return NULL;
}

UAnimMontage* URebelAIStub::GetFirstMontageFromAssetTreeWithTags(const FGameplayTagContainer& Tags) {
    return NULL;
}

FGameplayTag URebelAIStub::GetFaction() const {
    return FGameplayTag{};
}

URebelCharacterMovement* URebelAIStub::GetCharacterMovement() const {
    return NULL;
}

ERebelAIAttitude URebelAIStub::GetAttitudeTowardsPlayer() const {
    return ERebelAIAttitude::NotSet;
}

ERebelAIAttitude URebelAIStub::GetAttitudeTowards(const URebelAIStub* OtherStub) const {
    return ERebelAIAttitude::NotSet;
}

URebelAIDef* URebelAIStub::GetAIDefinition() const {
    return NULL;
}

URebelAIBoard* URebelAIStub::GetAIBoard() const {
    return NULL;
}

AActor* URebelAIStub::GetActor() const {
    return NULL;
}

UAbilitySystemComponent* URebelAIStub::GetAbilitySystemComponent() const {
    return NULL;
}

void URebelAIStub::ForceDespawnPawn() {
}

bool URebelAIStub::EquipWeapon(const bool bPlayAnim) {
    return false;
}

bool URebelAIStub::CheckSavedPathToStub(URebelAIStub* Stub) {
    return false;
}

void URebelAIStub::BP_SetCharacterState(const FGameplayTag State) {
}

URebelAIActionExecutionContext* URebelAIStub::BP_PerformAction(FRebelAIActionDesc& ActionDesc) {
    return NULL;
}

URebelAIStubEquipmentProxy* URebelAIStub::BP_GetEquipmentProxy() const {
    return NULL;
}

bool URebelAIStub::BP_CharacterStateExist(const FGameplayTag State) {
    return false;
}

void URebelAIStub::AddTag(const FGameplayTag& Tag) {
}


