#include "FocusAbilitiesSubsystem.h"
#include "Templates/SubclassOf.h"

UFocusAbilitiesSubsystem::UFocusAbilitiesSubsystem() {
    this->TransformOriginActor = NULL;
    this->SequenceActor = NULL;
    this->SequencePlayer = NULL;
    this->InputComponent = NULL;
    this->Config = NULL;
    this->FocusStringTable = NULL;
    this->LoadedMinHealthAfterCastEffect = NULL;
    this->FocusDetectorsLayer = NULL;
}

void UFocusAbilitiesSubsystem::UnlockAllFocusAbilities_Debug(TArray<TSubclassOf<UFocusAbilityBase>> FocusAbilityParentsAllowed) {
}

void UFocusAbilitiesSubsystem::ToggleDisablingAllCooldowns_Debug() {
}

bool UFocusAbilitiesSubsystem::ShouldUseStaminaDamage(const UAbilitySystemComponent* ASC) const {
    return false;
}

void UFocusAbilitiesSubsystem::SetShouldRestorePlayersControlRotation(bool bEnabled) {
}

void UFocusAbilitiesSubsystem::SetShouldLeaveTargetOnSequencePosition() {
}

void UFocusAbilitiesSubsystem::SetShouldLeaveInstigatorOnSequencePosition() {
}

void UFocusAbilitiesSubsystem::SetIsShadowStormSlowMoEnabled(bool bEnabled) {
}

void UFocusAbilitiesSubsystem::SetCurrentFocusAbility(UFocusAbilityBase* CurrentFocusAbilityBase) {
}

void UFocusAbilitiesSubsystem::SetCurrentAbilityMainTarget(AActor* TargetActor) {
}

void UFocusAbilitiesSubsystem::RemoveAscFromAbilityMode(UAbilitySystemComponent* ASC) {
}

void UFocusAbilitiesSubsystem::PlayMontageForActor(TArray<FHitReactionMontageSet>& HitReactionMontageSet, TArray<int32>& UsedMontagesHashes, AActor* Actor, bool& bShouldSkipDeathAnimation, float PlayRate, float StartOffset) {
}

void UFocusAbilitiesSubsystem::OnSequenceFromQueueFinished() {
}

void UFocusAbilitiesSubsystem::OnMontageFromQueueFinished() {
}

void UFocusAbilitiesSubsystem::OnDialogueStarted(UCinematicDialogue* Dialogue, bool bWasStateKept) {
}

bool UFocusAbilitiesSubsystem::IsNewFocusAbilitiesFlowEnabled() {
    return false;
}

bool UFocusAbilitiesSubsystem::IsAnyVatsMontagePlaying() {
    return false;
}

bool UFocusAbilitiesSubsystem::IsAbilitySequenceOrMontagePlaying() {
    return false;
}

float UFocusAbilitiesSubsystem::GetValueScaledFromAbility(TSubclassOf<UFocusAbilityBase> AbilityClass, float BaseEffectValue, AActor* Target) const {
    return 0.0f;
}

float UFocusAbilitiesSubsystem::GetSlowMoValueForSprint() const {
    return 0.0f;
}

float UFocusAbilitiesSubsystem::GetNewSlowMoValue() {
    return 0.0f;
}

bool UFocusAbilitiesSubsystem::GetIsShadowStormSlowMoEnabled() {
    return false;
}

bool UFocusAbilitiesSubsystem::GetIsInFocusAbilityCinematicMode() {
    return false;
}

bool UFocusAbilitiesSubsystem::GetCurrentSequenceRootTransformWithDirectionToPlayer(FTransform& Transform) {
    return false;
}

FFocusAbilityLevelDefinition UFocusAbilitiesSubsystem::GetCurrentLevelDefinitionOfCurrentAbility() const {
    return FFocusAbilityLevelDefinition{};
}

FFocusAbilityLevelDefinition UFocusAbilitiesSubsystem::GetCurrentLevelDefinitionOfAbility(TSubclassOf<UFocusAbilityBase> AbilityClass) const {
    return FFocusAbilityLevelDefinition{};
}

UFocusAbilityBase* UFocusAbilitiesSubsystem::GetCurrentFocusAbility() {
    return NULL;
}

UDogwoodFocusConfig* UFocusAbilitiesSubsystem::GetConfig() {
    return NULL;
}

bool UFocusAbilitiesSubsystem::CanApplyGenericEffect(const AActor* TargetActor, EGenericAAEffectType GenericAAEffectType, float ApplyChance) const {
    return false;
}

bool UFocusAbilitiesSubsystem::AreCooldownsEnabled_Debug() {
    return false;
}

void UFocusAbilitiesSubsystem::ApplyInstantAbility(AActor* TargetActor, UGameplayAbility* Ability, int32 AbilityLevel) {
}

void UFocusAbilitiesSubsystem::AddAllFocusAbilitiesRequiredItems_Debug() {
}


