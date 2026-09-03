#include "DawnwalkerCharacterBase.h"
#include "AkComponent.h"
#include "InventoryComponent.h"
#include "CharacterBaseAttributeSet.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "MotionWarpingComponent.h"
#include "SkinnedDecalSampler.h"
#include "AudioCharacterBaseComponent.h"
#include "DWCharacterGapSqueezeComponent.h"
#include "DawnwalkerAbilitySystemComponent.h"
#include "Templates/SubclassOf.h"
#include "WoundContainerComponent.h"

ADawnwalkerCharacterBase::ADawnwalkerCharacterBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseControllerRotationYaw = false;
    this->InventoryComponent = CreateDefaultSubobject<UInventoryComponent>(TEXT("Inventory Component"));
    this->SpawnedTextRenderComponent = NULL;
    this->AbilitySystemComponent = CreateDefaultSubobject<UDawnwalkerAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
    this->WoundContainerComponent = CreateDefaultSubobject<UWoundContainerComponent>(TEXT("Wound Container Component"));
    this->GapSqueezeComponent = CreateDefaultSubobject<UDWCharacterGapSqueezeComponent>(TEXT("GapSqueeze"));
    this->MotionWarpingComponent = CreateDefaultSubobject<UMotionWarpingComponent>(TEXT("MotionWarpingComponent"));
    this->SkinnedDecalSampler = CreateDefaultSubobject<USkinnedDecalSampler>(TEXT("SkinnedDecalSampler"));
    this->CharacterAttributeSet = CreateDefaultSubobject<UCharacterBaseAttributeSet>(TEXT("CharacterAttributeSet"));
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("Ak Component"));
    this->HeldObjectRoot = CreateDefaultSubobject<USceneComponent>(TEXT("HeldObjectRoot"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->HeldObject = NULL;
    this->CombatSoundParameters = NULL;
    this->AudioCharacterBaseComponent = CreateDefaultSubobject<UAudioCharacterBaseComponent>(TEXT("Audio Character Base Component"));
    this->bIsDefinitionAncestor = false;
    this->CharacterAbilityConfig = NULL;
    this->bWantsToSprint = false;
    this->bExhaustionAffectsHealth = false;
    this->DefaultMaxCharacterSpeed = 0.00f;
    this->AkComponent->SetupAttachment(RootComponent);
    this->HeldObjectRoot->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
}


FVector ADawnwalkerCharacterBase::SpawnSkinnedDecalFromPoint(FVector Point, float Size, int32 MinIndex, int32 MaxIndex) {
    return FVector{};
}

void ADawnwalkerCharacterBase::SetMaterialOverlayFromAbility(UMaterialInterface* NewOverlayMaterial, bool bApplyAlsoOnGarments) {
}

void ADawnwalkerCharacterBase::SetClawsExtended(bool bExtended) {
}

void ADawnwalkerCharacterBase::RefreshDefinition() {
}

void ADawnwalkerCharacterBase::OnResurrection_Implementation() {
}

void ADawnwalkerCharacterBase::OnInventoryContentsChanged() {
}

void ADawnwalkerCharacterBase::OnInstantDamageReceived_Implementation() {
}

bool ADawnwalkerCharacterBase::OneLinersBlockedFromAP() const {
    return false;
}

void ADawnwalkerCharacterBase::OnDeath_Implementation() {
}

void ADawnwalkerCharacterBase::OnClawExtensionStateChanged_Implementation(bool bNewState) {
}

void ADawnwalkerCharacterBase::OnAttitudeChanged(const ECharacterAttitude Attitude) {
}


bool ADawnwalkerCharacterBase::IsAlive_Implementation() const {
    return false;
}

bool ADawnwalkerCharacterBase::HasMatchingGameplayTag(FGameplayTag TagToCheck) const {
    return false;
}

bool ADawnwalkerCharacterBase::HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const {
    return false;
}

bool ADawnwalkerCharacterBase::HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const {
    return false;
}

void ADawnwalkerCharacterBase::GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const {
}

FName ADawnwalkerCharacterBase::GetNearestSocketForSkinnedMeshDecal(FVector Location) {
    return NAME_None;
}

UInventoryComponent* ADawnwalkerCharacterBase::GetInventoryComponent() const {
    return NULL;
}

FText ADawnwalkerCharacterBase::GetBossName() const {
    return FText::GetEmpty();
}

float ADawnwalkerCharacterBase::GetAnimCurveValue(FName CurveName) const {
    return 0.0f;
}

void ADawnwalkerCharacterBase::GenerateLoot(ELootGenerationSource GenerationSource) {
}

void ADawnwalkerCharacterBase::ClearHeldObject() {
}

bool ADawnwalkerCharacterBase::CanRun_Implementation() const {
    return false;
}

void ADawnwalkerCharacterBase::AttachToHand(TSubclassOf<AActor> ActorClass, bool bLeftHand, FTransform Offset) {
}

UAbilitySystemComponent* ADawnwalkerCharacterBase::GetAbilitySystemComponent() const {
    return AbilitySystemComponent;
}


