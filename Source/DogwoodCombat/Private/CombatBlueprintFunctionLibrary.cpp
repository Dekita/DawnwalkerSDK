#include "CombatBlueprintFunctionLibrary.h"
#include "Templates/SubclassOf.h"

UCombatBlueprintFunctionLibrary::UCombatBlueprintFunctionLibrary() {
}

void UCombatBlueprintFunctionLibrary::StopMontageWithBlend(UAnimInstance* AnimInstance, TSoftObjectPtr<UDataTable> CustomBlendTimesMatrix, const FGameplayTag& OutTag, const UAnimMontage* Montage) {
}

void UCombatBlueprintFunctionLibrary::SetAttributeValue(UAbilitySystemComponent* AttributeOwner, FGameplayAttribute& AttributeToSet, float AttributeValue) {
}

float UCombatBlueprintFunctionLibrary::PlayMontageWithBlend(UAnimInstance* AnimInstance, TSoftObjectPtr<UDataTable> CustomBlendTimesMatrix, UAnimMontage* MontageToPlay, float InPlayRate, EMontagePlayReturnType ReturnValueType, float InTimeToStartMontageAt, bool bStopAllMontages) {
    return 0.0f;
}

void UCombatBlueprintFunctionLibrary::PauseMontageOnTime(FTimerHandle& Timer, UAnimInstance* AnimInstance, UAnimMontage* MontageToPause, float Time) {
}

void UCombatBlueprintFunctionLibrary::ModifyGameplayEffectStartTime(UAbilitySystemComponent* EffectOwnerASC, FActiveGameplayEffectHandle Handle, float StartTimeDiff) {
}

bool UCombatBlueprintFunctionLibrary::IsAdditiveHit(const UAnimMontage* MontageToPlay) {
    return false;
}

bool UCombatBlueprintFunctionLibrary::IsActorLeftOriented(AActor* Actor, AActor* OtherActor) {
    return false;
}

bool UCombatBlueprintFunctionLibrary::IsActorInFrontOfOtherActor(AActor* Actor, AActor* OtherActor) {
    return false;
}

UStaticMesh* UCombatBlueprintFunctionLibrary::GetWeaponStaticMesh(UItemWeaponDataAsset* Weapon) {
    return NULL;
}

FGameplayTag UCombatBlueprintFunctionLibrary::GetTagFromMontageData(const UAnimMontage* MontageToPlay) {
    return FGameplayTag{};
}

float UCombatBlueprintFunctionLibrary::GetRootMotionScalingFromMontage(UAnimInstance* AnimInstance, const UAnimMontage* AnimMontage, FMetricsScalingSettings& MetricsScalingSettings) {
    return 0.0f;
}

FGameplayTag UCombatBlueprintFunctionLibrary::GetReflectDamageDirectionTag(EWeaponSwingDirection SwingDirection) {
    return FGameplayTag{};
}

float UCombatBlueprintFunctionLibrary::GetPlayrateForMontage(UAnimMontage* AnimMontage, const FMetricsScalingSettings& MetricsScalingSettings) {
    return 0.0f;
}

float UCombatBlueprintFunctionLibrary::GetPercentageValueInAngleBounds(AActor* Instigator, AActor* FocusTarget, float Angle, AActor* TestActor) {
    return 0.0f;
}

float UCombatBlueprintFunctionLibrary::GetParryPointNotificationTime(URebelAIStub* AIStub) {
    return 0.0f;
}

float UCombatBlueprintFunctionLibrary::GetHitWindowTime(URebelAIStub* AIStub, bool bEndTime) {
    return 0.0f;
}

float UCombatBlueprintFunctionLibrary::GetFocusAttackSuccessChance(TSubclassOf<UFocusAttack> FocusAttack, UAbilitySystemComponent* Target) {
    return 0.0f;
}

UAnimNotify_CombatNotifyState* UCombatBlueprintFunctionLibrary::GetFirstNotify(ECombatNotifyType CombatNotifyType, const UAnimMontage* AnimMontage) {
    return NULL;
}

float UCombatBlueprintFunctionLibrary::GetDeltaAngleToTestActor(AActor* Instigator, AActor* TestActor) {
    return 0.0f;
}

float UCombatBlueprintFunctionLibrary::GetCustomRootMotionScaleFromMontageData(const UAnimMontage* MontageToPlay) {
    return 0.0f;
}

float UCombatBlueprintFunctionLibrary::GetCustomRootMotionMultiplayer(const UAnimMontage* MontageToPlay) {
    return 0.0f;
}

bool UCombatBlueprintFunctionLibrary::GetCustomBlendForMontage(const UAnimMontage* MontageToPlay, FGameplayTag PreviousAnimTag, FAlphaBlend& OutBlend) {
    return false;
}

float UCombatBlueprintFunctionLibrary::GetBlendTimeForTags(const FGameplayTag& Old, const FGameplayTag& New, const UDataTable* BlendTimeMatrix) {
    return 0.0f;
}

FGameplayTag UCombatBlueprintFunctionLibrary::GetAttackDirectionTag(const URebelAIStub* Stub) {
    return FGameplayTag{};
}

TArray<AActor*> UCombatBlueprintFunctionLibrary::GetActorsSortedRightToLeftFromTargetData(const FGameplayAbilityTargetDataHandle& TargetData, FVector& PlayerLocation, FVector& ForwardVectorRef) {
    return TArray<AActor*>();
}

AActor* UCombatBlueprintFunctionLibrary::FindNearestAliveTargetForAbility(AActor* ActorOrigin, UFocusAbilityBase* Ability) {
    return NULL;
}

void UCombatBlueprintFunctionLibrary::FilterActorsInCone(AActor* Instigator, AActor* FocusTarget, TArray<AActor*>& Actors, float Angle) {
}

EWeaponSwingDirection UCombatBlueprintFunctionLibrary::ComboTagToAttackSwingDirection(const FGameplayTag& InTag) {
    return EWeaponSwingDirection::None;
}

bool UCombatBlueprintFunctionLibrary::CheckSpaceForActor(AActor* Actor, FVector RelativeDir, float Distance) {
    return false;
}

bool UCombatBlueprintFunctionLibrary::AreInstantCombosEnabled() {
    return false;
}

bool UCombatBlueprintFunctionLibrary::AreHitWindowsCover(float CoverThreshold, URebelAIStub* Attacker, URebelAIStub* Target) {
    return false;
}


