#include "RebelAIBoard.h"

URebelAIBoard::URebelAIBoard() {
    this->bMainBehaviorSuspended = false;
    this->bCanFight = false;
    this->bIsDead = false;
}

void URebelAIBoard::UpdateReactionLastSignalTime() {
}

void URebelAIBoard::Temp_BP_SetWeapon(const FGameplayTag Tag) {
}

void URebelAIBoard::Temp_BP_SetCombatMode(const FGameplayTag CombatModeTag) {
}

FGameplayTag URebelAIBoard::Temp_BP_GetWeapon() const {
    return FGameplayTag{};
}

void URebelAIBoard::Temp_BP_GetCombatMode(FGameplayTag& CombatModeTag) const {
}

void URebelAIBoard::StopReaction() {
}

void URebelAIBoard::StopPlayingMontagesByActions() {
}

void URebelAIBoard::StopAllActions() {
}

void URebelAIBoard::SetVectorPropertyByName(const FName& PropertyName, const FVector& Value) {
}

void URebelAIBoard::SetTotalCombatPhases(const int32& TotalPhases) {
}

void URebelAIBoard::SetObjectPropertyByName(const FName& PropertyName, UObject* Value) {
}

void URebelAIBoard::SetIntPropertyByName(const FName& PropertyName, int32 Value) {
}

void URebelAIBoard::SetForcedTarget(URebelAIStub* InTarget, float duration) {
}

void URebelAIBoard::SetFloatPropertyByName(const FName& PropertyName, float Value) {
}

void URebelAIBoard::SetCustomIdleBehaviorLogicTask(const FGameplayTag& LogicTaskTag) {
}

void URebelAIBoard::SetCustomGuardDirectionMappings(TMap<FGameplayTag, FGameplayTagContainer>& CustomGuardDirectionMappings) {
}

void URebelAIBoard::SetCurrentCombatPhase(const int32& Phase) {
}

void URebelAIBoard::RemoveTags(const FGameplayTagContainer& InTags) {
}

void URebelAIBoard::RemoveTag(const FGameplayTag& Tag) {
}

void URebelAIBoard::RemoveSensedObject(URebelAIStub* Stub) {
}

void URebelAIBoard::RemoveRememberFear(URebelAIStub* Stub) {
}

bool URebelAIBoard::RemoveIndicatorState(int32 ID) {
    return false;
}

void URebelAIBoard::OverrideReactionParams(const FInstancedStruct& Data, URebelAIStub* Instigator, const FGameplayTag& SituationTag) {
}

int32 URebelAIBoard::NumObservers() const {
    return 0;
}

int32 URebelAIBoard::NumHostiles() const {
    return 0;
}

bool URebelAIBoard::IsStubInsideMyCombatGuardArea(const URebelAIStub* OtherStub) const {
    return false;
}

bool URebelAIBoard::IsSomeoneHoldingTicket(FGameplayTag TicketTypeTag) {
    return false;
}

bool URebelAIBoard::IsReactionInteruptableByCutscene() const {
    return false;
}

bool URebelAIBoard::IsInsideGuardArea(const URebelAIStub* CheckTarget) const {
    return false;
}

bool URebelAIBoard::IsInsideCombatGuardArea() const {
    return false;
}

bool URebelAIBoard::IsBeingAttackedBy(URebelAIStub* Attacker) {
    return false;
}

bool URebelAIBoard::IsBeingAttacked() {
    return false;
}

bool URebelAIBoard::HasTicketToGive(FGameplayTag TicketTypeTag) {
    return false;
}

bool URebelAIBoard::HasTicketOfType(FGameplayTag TicketTypeTag) {
    return false;
}

bool URebelAIBoard::HasTag(const FGameplayTag& Tag, bool bExactMatch) const {
    return false;
}

bool URebelAIBoard::HasSensedObject(URebelAIStub* Stub) const {
    return false;
}

bool URebelAIBoard::HasRememberFear(URebelAIStub* Stub) {
    return false;
}

bool URebelAIBoard::HasReaction() const {
    return false;
}

bool URebelAIBoard::HasPerformedActionRecently(const FGameplayTag& ActionTag, float TimeWindowSeconds) const {
    return false;
}

bool URebelAIBoard::HasHostile(URebelAIStub* Stub) const {
    return false;
}

bool URebelAIBoard::HasFinishedActionRecently(const FGameplayTag& ActionTag, float TimeWindowSeconds) const {
    return false;
}

bool URebelAIBoard::HasAttacker(const URebelAIStub* Stub) const {
    return false;
}

bool URebelAIBoard::HasAnyUnbreakableActiveAction() const {
    return false;
}

bool URebelAIBoard::HasAnyTags(const FGameplayTagContainer& InTags, bool bExactMatch) const {
    return false;
}

bool URebelAIBoard::HasAnyActiveActionWithTags(const FGameplayTagContainer& ActionTags) const {
    return false;
}

bool URebelAIBoard::HasAnyActiveAction(const FGameplayTagContainer& ActionTags) const {
    return false;
}

bool URebelAIBoard::HasAllTags(const FGameplayTagContainer& InTags, bool bExactMatch) const {
    return false;
}

URebelAIStub* URebelAIBoard::GetTarget() const {
    return NULL;
}

FRebelAIRecentEvents URebelAIBoard::GetRecentEvents() const {
    return FRebelAIRecentEvents{};
}

FGameplayTag URebelAIBoard::GetReactionSituationTag() const {
    return FGameplayTag{};
}

FVector URebelAIBoard::GetReactionSituationOrigin() const {
    return FVector{};
}

double URebelAIBoard::GetReactionLastSignalTime() const {
    return 0.0;
}

bool URebelAIBoard::GetReactionIsResumed() const {
    return false;
}

URebelAIStub* URebelAIBoard::GetReactionInstigator() const {
    return NULL;
}

FVector URebelAIBoard::GetGuardAreaLocation() const {
    return FVector{};
}

URebelFormationGroup* URebelAIBoard::GetFormation() {
    return NULL;
}

URebelAIStub* URebelAIBoard::GetForcedTarget() {
    return NULL;
}

ERebelIndicatorIconType URebelAIBoard::GetCurrentIndicatorIconType() {
    return ERebelIndicatorIconType::Defending;
}

ACombatArena* URebelAIBoard::GetCombatArena() const {
    return NULL;
}

FVector URebelAIBoard::GetClosestEdgePointOnGuardArea(const FVector& Location) const {
    return FVector{};
}

FVector URebelAIBoard::GetClosestEdgePointOnCombatGuardArea(const FVector& Location) const {
    return FVector{};
}

FGameplayTag URebelAIBoard::GetCharacterPose() const {
    return FGameplayTag{};
}

FGameplayTagContainer URebelAIBoard::GetBlockingDirections() const {
    return FGameplayTagContainer{};
}

TArray<URebelAIStub*> URebelAIBoard::GetAttackers() {
    return TArray<URebelAIStub*>();
}

URebelAIActionExecutionContext* URebelAIBoard::GetActiveAction(const FGameplayTag& ActionTag) const {
    return NULL;
}

double URebelAIBoard::GetActionTimestamp(const FGameplayTag& ActionTag) const {
    return 0.0;
}

double URebelAIBoard::GetActionEndTimestamp(const FGameplayTag& ActionTag) const {
    return 0.0;
}

void URebelAIBoard::CopyGuardAreaFromStub(URebelAIStub* Stub) {
}

bool URebelAIBoard::CheckCombatPathToStub(URebelAIStub* Stub) {
    return false;
}

bool URebelAIBoard::CanBeAttacked(TArray<URebelAIStub*> StubsToIgnore) {
    return false;
}

bool URebelAIBoard::BP_HasActiveAction(const FGameplayTag& ActionTag) const {
    return false;
}

void URebelAIBoard::BP_AddHostile(URebelAIStub* Stub) {
}

void URebelAIBoard::AddTags(const FGameplayTagContainer& InTags) {
}

void URebelAIBoard::AddTag(const FGameplayTag& Tag) {
}

void URebelAIBoard::AddSensedObject(URebelAIStub* Stub) {
}

void URebelAIBoard::AddRememberFear(URebelAIStub* Stub, float ReactionEnd, float RememberFor, FGameplayTag SituationTag, const bool bRenew) {
}

void URebelAIBoard::AddLookAtTarget(URebelAIStub* InTarget) {
}

int32 URebelAIBoard::AddIndicatorState(ERebelIndicatorStatePriority Priority, FRebelIndicatorState State, bool bPushToBottom) {
    return 0;
}

void URebelAIBoard::ActivateParryWindowForIndicatorState(int32 ID) {
}


