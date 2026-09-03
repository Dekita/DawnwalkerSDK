#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EItemWeaponSubtype.h"
#include "Weapon.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "AttackData.h"
#include "EOffenseType.h"
#include "EWeaponType.h"
#include "WeaponBase.generated.h"

class APawn;
class UCapsuleComponent;
class UCombatComponentBase;
class UItemWeaponDataAsset;
class USceneComponent;
class UShapeComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class DOGWOODCOMBAT_API AWeaponBase : public AActor, public IWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* BaseMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShapeComponent* HitCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShapeComponent* BlockDetectionCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCombatComponentBase* OwningCombatComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOffenseType OffenseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponType WeaponType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EItemWeaponSubtype, FVector> SheathedWeaponTypeScales;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GuardStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDifficultToParry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanKnockDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnemyDefensePenalty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTestIgnoreParryVsUnarmed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* WeaponSoundSlot;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemWeaponDataAsset* WeaponDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* HitColliderCapsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag WeaponSoundTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CapsuleOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsOwnerDuringAttack;
    
public:
    AWeaponBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetOwningPawn(APawn* InOwningPawn);
    
    UFUNCTION(BlueprintCallable)
    void SetNewHitColliderHalfHeight(float NewHalfHeight);
    
    UFUNCTION(BlueprintCallable)
    void ResetHitColliderHalfHeight();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWeaponAppearanceSet();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyPlayBloodVFX(const FVector& HitLocation, UCombatComponentBase* DefenderCombatComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyAttackImpact(const FAttackData& Data, const FAttackData& OpponentResponse, FVector HitLocation, bool bNonCombatableCharacterHit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetSheathedWeaponScale(EItemWeaponSubtype NewWeaponType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetOwnerEnhancedAttackValue(float& OutEnhancedAttackVisualizationValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsWeaponDuringAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetHitVelocityForVFX();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector GetHitLocationForVFX();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector GetHitDirectionForVFX();
    
    UFUNCTION(BlueprintCallable)
    float GetColliderHeight();
    

    // Fix for true pure virtual functions not being implemented
};

