#include "WeaponBase.h"
#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

AWeaponBase::AWeaponBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WeaponMesh"));
    this->BaseMesh = (UStaticMeshComponent*)RootComponent;
    this->HitCollider = CreateDefaultSubobject<UCapsuleComponent>(TEXT("HitCollider"));
    this->BlockDetectionCollider = CreateDefaultSubobject<UCapsuleComponent>(TEXT("BlockDetector"));
    this->OwningCombatComponent = NULL;
    this->OffenseType = EOffenseType::Weapon;
    this->WeaponType = EWeaponType::Sword;
    this->GuardStrength = 1.00f;
    this->bDifficultToParry = false;
    this->bCanKnockDown = false;
    this->EnemyDefensePenalty = 0.00f;
    this->bTestIgnoreParryVsUnarmed = false;
    this->WeaponSoundSlot = CreateDefaultSubobject<USceneComponent>(TEXT("WeaponSoundSlot"));
    this->WeaponDataAsset = NULL;
    this->HitColliderCapsule = NULL;
    this->CapsuleOffset = 0.00f;
    this->bIsOwnerDuringAttack = false;
    this->BlockDetectionCollider->SetupAttachment(RootComponent);
    this->HitCollider->SetupAttachment(RootComponent);
    this->WeaponSoundSlot->SetupAttachment(RootComponent);
}

void AWeaponBase::SetOwningPawn(APawn* InOwningPawn) {
}

void AWeaponBase::SetNewHitColliderHalfHeight(float NewHalfHeight) {
}

void AWeaponBase::ResetHitColliderHalfHeight() {
}

void AWeaponBase::OnWeaponAppearanceSet_Implementation() {
}



FVector AWeaponBase::GetSheathedWeaponScale(EItemWeaponSubtype NewWeaponType) const {
    return FVector{};
}

bool AWeaponBase::GetOwnerEnhancedAttackValue(float& OutEnhancedAttackVisualizationValue) const {
    return false;
}

bool AWeaponBase::GetIsWeaponDuringAttack() const {
    return false;
}

float AWeaponBase::GetHitVelocityForVFX_Implementation() {
    return 0.0f;
}

FVector AWeaponBase::GetHitLocationForVFX_Implementation() {
    return FVector{};
}

FVector AWeaponBase::GetHitDirectionForVFX_Implementation() {
    return FVector{};
}

float AWeaponBase::GetColliderHeight() {
    return 0.0f;
}


